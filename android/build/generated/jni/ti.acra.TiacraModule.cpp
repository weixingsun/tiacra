/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ti.acra.TiacraModule.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"




#include "org.appcelerator.kroll.KrollModule.h"

#define TAG "TiacraModule"

using namespace v8;

		namespace ti {
		namespace acra {


Persistent<FunctionTemplate> TiacraModule::proxyTemplate = Persistent<FunctionTemplate>();
jclass TiacraModule::javaClass = NULL;

TiacraModule::TiacraModule(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void TiacraModule::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("Tiacra");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	Local<Object> moduleInstance = proxyConstructor->NewInstance();
	exports->Set(nameSymbol, moduleInstance);
}

void TiacraModule::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	titanium::KrollModule::dispose();
}

Handle<FunctionTemplate> TiacraModule::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("ti/acra/TiacraModule");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("Tiacra");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		titanium::KrollModule::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<TiacraModule>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *proxyTemplate);

	// Method bindings --------------------------------------------------------
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "init", TiacraModule::init);

	Local<ObjectTemplate> prototypeTemplate = proxyTemplate->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = proxyTemplate->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------
	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment in TiacraModule");
		//return;
	}


		jfieldID fieldReportField_CUSTOM_DATA = env->GetStaticFieldID (javaClass, "ReportField_CUSTOM_DATA", "I");
		jint fieldValueReportField_CUSTOM_DATA = env->GetStaticIntField(javaClass, fieldReportField_CUSTOM_DATA);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_CUSTOM_DATA", fieldValueReportField_CUSTOM_DATA);


		jfieldID fieldReportField_MEDIA_CODEC_LIST = env->GetStaticFieldID (javaClass, "ReportField_MEDIA_CODEC_LIST", "I");
		jint fieldValueReportField_MEDIA_CODEC_LIST = env->GetStaticIntField(javaClass, fieldReportField_MEDIA_CODEC_LIST);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_MEDIA_CODEC_LIST", fieldValueReportField_MEDIA_CODEC_LIST);


		jfieldID fieldReportField_USER_COMMENT = env->GetStaticFieldID (javaClass, "ReportField_USER_COMMENT", "I");
		jint fieldValueReportField_USER_COMMENT = env->GetStaticIntField(javaClass, fieldReportField_USER_COMMENT);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_USER_COMMENT", fieldValueReportField_USER_COMMENT);


		jfieldID fieldReportField_USER_IP = env->GetStaticFieldID (javaClass, "ReportField_USER_IP", "I");
		jint fieldValueReportField_USER_IP = env->GetStaticIntField(javaClass, fieldReportField_USER_IP);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_USER_IP", fieldValueReportField_USER_IP);


		jfieldID fieldHttpReportType_FORM = env->GetStaticFieldID (javaClass, "HttpReportType_FORM", "I");
		jint fieldValueHttpReportType_FORM = env->GetStaticIntField(javaClass, fieldHttpReportType_FORM);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "HttpReportType_FORM", fieldValueHttpReportType_FORM);


		jfieldID fieldReportField_TOTAL_MEM_SIZE = env->GetStaticFieldID (javaClass, "ReportField_TOTAL_MEM_SIZE", "I");
		jint fieldValueReportField_TOTAL_MEM_SIZE = env->GetStaticIntField(javaClass, fieldReportField_TOTAL_MEM_SIZE);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_TOTAL_MEM_SIZE", fieldValueReportField_TOTAL_MEM_SIZE);


		jfieldID fieldReportField_PHONE_MODEL = env->GetStaticFieldID (javaClass, "ReportField_PHONE_MODEL", "I");
		jint fieldValueReportField_PHONE_MODEL = env->GetStaticIntField(javaClass, fieldReportField_PHONE_MODEL);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_PHONE_MODEL", fieldValueReportField_PHONE_MODEL);


		jfieldID fieldReportField_DUMPSYS_MEMINFO = env->GetStaticFieldID (javaClass, "ReportField_DUMPSYS_MEMINFO", "I");
		jint fieldValueReportField_DUMPSYS_MEMINFO = env->GetStaticIntField(javaClass, fieldReportField_DUMPSYS_MEMINFO);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_DUMPSYS_MEMINFO", fieldValueReportField_DUMPSYS_MEMINFO);


		jfieldID fieldReportField_INITIAL_CONFIGURATION = env->GetStaticFieldID (javaClass, "ReportField_INITIAL_CONFIGURATION", "I");
		jint fieldValueReportField_INITIAL_CONFIGURATION = env->GetStaticIntField(javaClass, fieldReportField_INITIAL_CONFIGURATION);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_INITIAL_CONFIGURATION", fieldValueReportField_INITIAL_CONFIGURATION);


		jfieldID fieldReportField_DISPLAY = env->GetStaticFieldID (javaClass, "ReportField_DISPLAY", "I");
		jint fieldValueReportField_DISPLAY = env->GetStaticIntField(javaClass, fieldReportField_DISPLAY);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_DISPLAY", fieldValueReportField_DISPLAY);


		jfieldID fieldReportField_BRAND = env->GetStaticFieldID (javaClass, "ReportField_BRAND", "I");
		jint fieldValueReportField_BRAND = env->GetStaticIntField(javaClass, fieldReportField_BRAND);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_BRAND", fieldValueReportField_BRAND);


		jfieldID fieldReportField_PRODUCT = env->GetStaticFieldID (javaClass, "ReportField_PRODUCT", "I");
		jint fieldValueReportField_PRODUCT = env->GetStaticIntField(javaClass, fieldReportField_PRODUCT);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_PRODUCT", fieldValueReportField_PRODUCT);


		jfieldID fieldReportField_REPORT_ID = env->GetStaticFieldID (javaClass, "ReportField_REPORT_ID", "I");
		jint fieldValueReportField_REPORT_ID = env->GetStaticIntField(javaClass, fieldReportField_REPORT_ID);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_REPORT_ID", fieldValueReportField_REPORT_ID);


		jfieldID fieldReportField_INSTALLATION_ID = env->GetStaticFieldID (javaClass, "ReportField_INSTALLATION_ID", "I");
		jint fieldValueReportField_INSTALLATION_ID = env->GetStaticIntField(javaClass, fieldReportField_INSTALLATION_ID);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_INSTALLATION_ID", fieldValueReportField_INSTALLATION_ID);


		jfieldID fieldReportField_BUILD = env->GetStaticFieldID (javaClass, "ReportField_BUILD", "I");
		jint fieldValueReportField_BUILD = env->GetStaticIntField(javaClass, fieldReportField_BUILD);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_BUILD", fieldValueReportField_BUILD);


		jfieldID fieldReportField_SHARED_PREFERENCES = env->GetStaticFieldID (javaClass, "ReportField_SHARED_PREFERENCES", "I");
		jint fieldValueReportField_SHARED_PREFERENCES = env->GetStaticIntField(javaClass, fieldReportField_SHARED_PREFERENCES);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_SHARED_PREFERENCES", fieldValueReportField_SHARED_PREFERENCES);


		jfieldID fieldReportField_ANDROID_VERSION = env->GetStaticFieldID (javaClass, "ReportField_ANDROID_VERSION", "I");
		jint fieldValueReportField_ANDROID_VERSION = env->GetStaticIntField(javaClass, fieldReportField_ANDROID_VERSION);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_ANDROID_VERSION", fieldValueReportField_ANDROID_VERSION);


		jfieldID fieldReportField_AVAILABLE_MEM_SIZE = env->GetStaticFieldID (javaClass, "ReportField_AVAILABLE_MEM_SIZE", "I");
		jint fieldValueReportField_AVAILABLE_MEM_SIZE = env->GetStaticIntField(javaClass, fieldReportField_AVAILABLE_MEM_SIZE);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_AVAILABLE_MEM_SIZE", fieldValueReportField_AVAILABLE_MEM_SIZE);


		jfieldID fieldReportField_CRASH_CONFIGURATION = env->GetStaticFieldID (javaClass, "ReportField_CRASH_CONFIGURATION", "I");
		jint fieldValueReportField_CRASH_CONFIGURATION = env->GetStaticIntField(javaClass, fieldReportField_CRASH_CONFIGURATION);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_CRASH_CONFIGURATION", fieldValueReportField_CRASH_CONFIGURATION);


		jfieldID fieldHttpReportType_JSON = env->GetStaticFieldID (javaClass, "HttpReportType_JSON", "I");
		jint fieldValueHttpReportType_JSON = env->GetStaticIntField(javaClass, fieldHttpReportType_JSON);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "HttpReportType_JSON", fieldValueHttpReportType_JSON);


		jfieldID fieldReportField_APP_VERSION_CODE = env->GetStaticFieldID (javaClass, "ReportField_APP_VERSION_CODE", "I");
		jint fieldValueReportField_APP_VERSION_CODE = env->GetStaticIntField(javaClass, fieldReportField_APP_VERSION_CODE);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_APP_VERSION_CODE", fieldValueReportField_APP_VERSION_CODE);


		jfieldID fieldHttpSenderMethod_POST = env->GetStaticFieldID (javaClass, "HttpSenderMethod_POST", "I");
		jint fieldValueHttpSenderMethod_POST = env->GetStaticIntField(javaClass, fieldHttpSenderMethod_POST);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "HttpSenderMethod_POST", fieldValueHttpSenderMethod_POST);


		jfieldID fieldReportField_DEVICE_FEATURES = env->GetStaticFieldID (javaClass, "ReportField_DEVICE_FEATURES", "I");
		jint fieldValueReportField_DEVICE_FEATURES = env->GetStaticIntField(javaClass, fieldReportField_DEVICE_FEATURES);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_DEVICE_FEATURES", fieldValueReportField_DEVICE_FEATURES);


		jfieldID fieldReportField_LOGCAT = env->GetStaticFieldID (javaClass, "ReportField_LOGCAT", "I");
		jint fieldValueReportField_LOGCAT = env->GetStaticIntField(javaClass, fieldReportField_LOGCAT);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_LOGCAT", fieldValueReportField_LOGCAT);


		jfieldID fieldReportField_STACK_TRACE_HASH = env->GetStaticFieldID (javaClass, "ReportField_STACK_TRACE_HASH", "I");
		jint fieldValueReportField_STACK_TRACE_HASH = env->GetStaticIntField(javaClass, fieldReportField_STACK_TRACE_HASH);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_STACK_TRACE_HASH", fieldValueReportField_STACK_TRACE_HASH);


		jfieldID fieldReportField_USER_APP_START_DATE = env->GetStaticFieldID (javaClass, "ReportField_USER_APP_START_DATE", "I");
		jint fieldValueReportField_USER_APP_START_DATE = env->GetStaticIntField(javaClass, fieldReportField_USER_APP_START_DATE);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_USER_APP_START_DATE", fieldValueReportField_USER_APP_START_DATE);


		jfieldID fieldReportField_APP_VERSION_NAME = env->GetStaticFieldID (javaClass, "ReportField_APP_VERSION_NAME", "I");
		jint fieldValueReportField_APP_VERSION_NAME = env->GetStaticIntField(javaClass, fieldReportField_APP_VERSION_NAME);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_APP_VERSION_NAME", fieldValueReportField_APP_VERSION_NAME);


		jfieldID fieldReportField_PACKAGE_NAME = env->GetStaticFieldID (javaClass, "ReportField_PACKAGE_NAME", "I");
		jint fieldValueReportField_PACKAGE_NAME = env->GetStaticIntField(javaClass, fieldReportField_PACKAGE_NAME);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_PACKAGE_NAME", fieldValueReportField_PACKAGE_NAME);


		jfieldID fieldReportField_DEVICE_ID = env->GetStaticFieldID (javaClass, "ReportField_DEVICE_ID", "I");
		jint fieldValueReportField_DEVICE_ID = env->GetStaticIntField(javaClass, fieldReportField_DEVICE_ID);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_DEVICE_ID", fieldValueReportField_DEVICE_ID);


		jfieldID fieldReportingInteractionMode_TOAST = env->GetStaticFieldID (javaClass, "ReportingInteractionMode_TOAST", "I");
		jint fieldValueReportingInteractionMode_TOAST = env->GetStaticIntField(javaClass, fieldReportingInteractionMode_TOAST);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportingInteractionMode_TOAST", fieldValueReportingInteractionMode_TOAST);


		jfieldID fieldReportingInteractionMode_SILENT = env->GetStaticFieldID (javaClass, "ReportingInteractionMode_SILENT", "I");
		jint fieldValueReportingInteractionMode_SILENT = env->GetStaticIntField(javaClass, fieldReportingInteractionMode_SILENT);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportingInteractionMode_SILENT", fieldValueReportingInteractionMode_SILENT);


		jfieldID fieldReportField_THREAD_DETAILS = env->GetStaticFieldID (javaClass, "ReportField_THREAD_DETAILS", "I");
		jint fieldValueReportField_THREAD_DETAILS = env->GetStaticIntField(javaClass, fieldReportField_THREAD_DETAILS);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_THREAD_DETAILS", fieldValueReportField_THREAD_DETAILS);


		jfieldID fieldReportField_DROPBOX = env->GetStaticFieldID (javaClass, "ReportField_DROPBOX", "I");
		jint fieldValueReportField_DROPBOX = env->GetStaticIntField(javaClass, fieldReportField_DROPBOX);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_DROPBOX", fieldValueReportField_DROPBOX);


		jfieldID fieldHttpSenderMethod_PUT = env->GetStaticFieldID (javaClass, "HttpSenderMethod_PUT", "I");
		jint fieldValueHttpSenderMethod_PUT = env->GetStaticIntField(javaClass, fieldHttpSenderMethod_PUT);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "HttpSenderMethod_PUT", fieldValueHttpSenderMethod_PUT);


		jfieldID fieldReportField_EVENTSLOG = env->GetStaticFieldID (javaClass, "ReportField_EVENTSLOG", "I");
		jint fieldValueReportField_EVENTSLOG = env->GetStaticIntField(javaClass, fieldReportField_EVENTSLOG);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_EVENTSLOG", fieldValueReportField_EVENTSLOG);


		jfieldID fieldReportField_FILE_PATH = env->GetStaticFieldID (javaClass, "ReportField_FILE_PATH", "I");
		jint fieldValueReportField_FILE_PATH = env->GetStaticIntField(javaClass, fieldReportField_FILE_PATH);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_FILE_PATH", fieldValueReportField_FILE_PATH);


		jfieldID fieldReportField_SETTINGS_GLOBAL = env->GetStaticFieldID (javaClass, "ReportField_SETTINGS_GLOBAL", "I");
		jint fieldValueReportField_SETTINGS_GLOBAL = env->GetStaticIntField(javaClass, fieldReportField_SETTINGS_GLOBAL);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_SETTINGS_GLOBAL", fieldValueReportField_SETTINGS_GLOBAL);


		jfieldID fieldReportField_APPLICATION_LOG = env->GetStaticFieldID (javaClass, "ReportField_APPLICATION_LOG", "I");
		jint fieldValueReportField_APPLICATION_LOG = env->GetStaticIntField(javaClass, fieldReportField_APPLICATION_LOG);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_APPLICATION_LOG", fieldValueReportField_APPLICATION_LOG);


		jfieldID fieldReportField_SETTINGS_SYSTEM = env->GetStaticFieldID (javaClass, "ReportField_SETTINGS_SYSTEM", "I");
		jint fieldValueReportField_SETTINGS_SYSTEM = env->GetStaticIntField(javaClass, fieldReportField_SETTINGS_SYSTEM);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_SETTINGS_SYSTEM", fieldValueReportField_SETTINGS_SYSTEM);


		jfieldID fieldReportField_ENVIRONMENT = env->GetStaticFieldID (javaClass, "ReportField_ENVIRONMENT", "I");
		jint fieldValueReportField_ENVIRONMENT = env->GetStaticIntField(javaClass, fieldReportField_ENVIRONMENT);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_ENVIRONMENT", fieldValueReportField_ENVIRONMENT);


		jfieldID fieldReportField_IS_SILENT = env->GetStaticFieldID (javaClass, "ReportField_IS_SILENT", "I");
		jint fieldValueReportField_IS_SILENT = env->GetStaticIntField(javaClass, fieldReportField_IS_SILENT);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_IS_SILENT", fieldValueReportField_IS_SILENT);


		jfieldID fieldReportField_SETTINGS_SECURE = env->GetStaticFieldID (javaClass, "ReportField_SETTINGS_SECURE", "I");
		jint fieldValueReportField_SETTINGS_SECURE = env->GetStaticIntField(javaClass, fieldReportField_SETTINGS_SECURE);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_SETTINGS_SECURE", fieldValueReportField_SETTINGS_SECURE);


		jfieldID fieldReportField_STACK_TRACE = env->GetStaticFieldID (javaClass, "ReportField_STACK_TRACE", "I");
		jint fieldValueReportField_STACK_TRACE = env->GetStaticIntField(javaClass, fieldReportField_STACK_TRACE);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_STACK_TRACE", fieldValueReportField_STACK_TRACE);


		jfieldID fieldReportField_RADIOLOG = env->GetStaticFieldID (javaClass, "ReportField_RADIOLOG", "I");
		jint fieldValueReportField_RADIOLOG = env->GetStaticIntField(javaClass, fieldReportField_RADIOLOG);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_RADIOLOG", fieldValueReportField_RADIOLOG);


		jfieldID fieldReportField_USER_EMAIL = env->GetStaticFieldID (javaClass, "ReportField_USER_EMAIL", "I");
		jint fieldValueReportField_USER_EMAIL = env->GetStaticIntField(javaClass, fieldReportField_USER_EMAIL);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_USER_EMAIL", fieldValueReportField_USER_EMAIL);


		jfieldID fieldReportField_USER_CRASH_DATE = env->GetStaticFieldID (javaClass, "ReportField_USER_CRASH_DATE", "I");
		jint fieldValueReportField_USER_CRASH_DATE = env->GetStaticIntField(javaClass, fieldReportField_USER_CRASH_DATE);
		DEFINE_NUMBER_CONSTANT(prototypeTemplate, "ReportField_USER_CRASH_DATE", fieldValueReportField_USER_CRASH_DATE);



	// Dynamic properties -----------------------------------------------------

	// Accessors --------------------------------------------------------------

	return proxyTemplate;
}

// Methods --------------------------------------------------------------------
Handle<Value> TiacraModule::init(const Arguments& args)
{
	LOGD(TAG, "init()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TiacraModule::javaClass, "init", "(Ljava/util/HashMap;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'init' with signature '(Ljava/util/HashMap;)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "init: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[1];




	bool isNew_0;
	
	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaObject(env, arg_0, &isNew_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



			if (isNew_0) {
				env->DeleteLocalRef(jArguments[0].l);
			}


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}

// Dynamic property accessors -------------------------------------------------


		} // acra
		} // ti

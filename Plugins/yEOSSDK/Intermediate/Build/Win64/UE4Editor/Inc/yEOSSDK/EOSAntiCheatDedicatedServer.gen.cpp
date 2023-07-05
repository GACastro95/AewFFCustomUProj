// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSAntiCheatDedicatedServer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAntiCheatDedicatedServer() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAntiCheatDedicatedServer_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAntiCheatDedicatedServer();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientMode();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings();
// End Cross Module References
	DEFINE_FUNCTION(UEOSAntiCheatDedicatedServer::execBeginSession)
	{
		P_GET_ENUM(EEOSAntiCheatClientMode,Z_Param__enClinetMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BeginSession(EEOSAntiCheatClientMode(Z_Param__enClinetMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAntiCheatDedicatedServer::execEndSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EndSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAntiCheatDedicatedServer::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSAntiCheatAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSAntiCheatDedicatedServer::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAntiCheatDedicatedServer::execSetupInternalCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupInternalCallback();
		P_NATIVE_END;
	}
	void UEOSAntiCheatDedicatedServer::StaticRegisterNativesUEOSAntiCheatDedicatedServer()
	{
		UClass* Class = UEOSAntiCheatDedicatedServer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginSession", &UEOSAntiCheatDedicatedServer::execBeginSession },
			{ "EndSession", &UEOSAntiCheatDedicatedServer::execEndSession },
			{ "SetApiVersion", &UEOSAntiCheatDedicatedServer::execSetApiVersion },
			{ "SetupInternalCallback", &UEOSAntiCheatDedicatedServer::execSetupInternalCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics
	{
		struct EOSAntiCheatDedicatedServer_eventBeginSession_Parms
		{
			EEOSAntiCheatClientMode _enClinetMode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enClinetMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enClinetMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics::NewProp__enClinetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics::NewProp__enClinetMode = { "_enClinetMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAntiCheatDedicatedServer_eventBeginSession_Parms, _enClinetMode), Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientMode, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAntiCheatDedicatedServer_eventBeginSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAntiCheatDedicatedServer_eventBeginSession_Parms), &Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics::NewProp__enClinetMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics::NewProp__enClinetMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAntiCheatDedicatedServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAntiCheatDedicatedServer, nullptr, "BeginSession", nullptr, nullptr, sizeof(EOSAntiCheatDedicatedServer_eventBeginSession_Parms), Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_EndSession_Statics
	{
		struct EOSAntiCheatDedicatedServer_eventEndSession_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_EndSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAntiCheatDedicatedServer_eventEndSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_EndSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAntiCheatDedicatedServer_eventEndSession_Parms), &Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_EndSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_EndSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_EndSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_EndSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAntiCheatDedicatedServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_EndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAntiCheatDedicatedServer, nullptr, "EndSession", nullptr, nullptr, sizeof(EOSAntiCheatDedicatedServer_eventEndSession_Parms), Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_EndSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_EndSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_EndSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_EndSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_EndSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_EndSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetApiVersion_Statics
	{
		struct EOSAntiCheatDedicatedServer_eventSetApiVersion_Parms
		{
			FEOSAntiCheatAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAntiCheatDedicatedServer_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAntiCheatDedicatedServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAntiCheatDedicatedServer, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSAntiCheatDedicatedServer_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetupInternalCallback_Statics
	{
		struct EOSAntiCheatDedicatedServer_eventSetupInternalCallback_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAntiCheatDedicatedServer_eventSetupInternalCallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetupInternalCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAntiCheatDedicatedServer_eventSetupInternalCallback_Parms), &Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetupInternalCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetupInternalCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetupInternalCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAntiCheatDedicatedServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetupInternalCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAntiCheatDedicatedServer, nullptr, "SetupInternalCallback", nullptr, nullptr, sizeof(EOSAntiCheatDedicatedServer_eventSetupInternalCallback_Parms), Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetupInternalCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetupInternalCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetupInternalCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetupInternalCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetupInternalCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetupInternalCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSAntiCheatDedicatedServer_NoRegister()
	{
		return UEOSAntiCheatDedicatedServer::StaticClass();
	}
	struct Z_Construct_UClass_UEOSAntiCheatDedicatedServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSAntiCheatDedicatedServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSIDs,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSAntiCheatDedicatedServer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_BeginSession, "BeginSession" }, // 4232978364
		{ &Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_EndSession, "EndSession" }, // 326673617
		{ &Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetApiVersion, "SetApiVersion" }, // 2655490094
		{ &Z_Construct_UFunction_UEOSAntiCheatDedicatedServer_SetupInternalCallback, "SetupInternalCallback" }, // 1903393353
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAntiCheatDedicatedServer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSAntiCheatDedicatedServer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatDedicatedServer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSAntiCheatDedicatedServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSAntiCheatDedicatedServer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSAntiCheatDedicatedServer_Statics::ClassParams = {
		&UEOSAntiCheatDedicatedServer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSAntiCheatDedicatedServer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAntiCheatDedicatedServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSAntiCheatDedicatedServer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSAntiCheatDedicatedServer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSAntiCheatDedicatedServer, 1970940754);
	template<> YEOSSDK_API UClass* StaticClass<UEOSAntiCheatDedicatedServer>()
	{
		return UEOSAntiCheatDedicatedServer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSAntiCheatDedicatedServer(Z_Construct_UClass_UEOSAntiCheatDedicatedServer, &UEOSAntiCheatDedicatedServer::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSAntiCheatDedicatedServer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSAntiCheatDedicatedServer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSAntiCheatDedicatedClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAntiCheatDedicatedClient() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAntiCheatDedicatedClient_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAntiCheatDedicatedClient();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings();
// End Cross Module References
	DEFINE_FUNCTION(UEOSAntiCheatDedicatedClient::execBeginSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BeginSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAntiCheatDedicatedClient::execEndSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EndSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAntiCheatDedicatedClient::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSAntiCheatAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSAntiCheatDedicatedClient::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAntiCheatDedicatedClient::execSetupInternalCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupInternalCallback();
		P_NATIVE_END;
	}
	void UEOSAntiCheatDedicatedClient::StaticRegisterNativesUEOSAntiCheatDedicatedClient()
	{
		UClass* Class = UEOSAntiCheatDedicatedClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginSession", &UEOSAntiCheatDedicatedClient::execBeginSession },
			{ "EndSession", &UEOSAntiCheatDedicatedClient::execEndSession },
			{ "SetApiVersion", &UEOSAntiCheatDedicatedClient::execSetApiVersion },
			{ "SetupInternalCallback", &UEOSAntiCheatDedicatedClient::execSetupInternalCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_BeginSession_Statics
	{
		struct EOSAntiCheatDedicatedClient_eventBeginSession_Parms
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
	void Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_BeginSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAntiCheatDedicatedClient_eventBeginSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_BeginSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAntiCheatDedicatedClient_eventBeginSession_Parms), &Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_BeginSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_BeginSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_BeginSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_BeginSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAntiCheatDedicatedClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_BeginSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAntiCheatDedicatedClient, nullptr, "BeginSession", nullptr, nullptr, sizeof(EOSAntiCheatDedicatedClient_eventBeginSession_Parms), Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_BeginSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_BeginSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_BeginSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_BeginSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_BeginSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_BeginSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_EndSession_Statics
	{
		struct EOSAntiCheatDedicatedClient_eventEndSession_Parms
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
	void Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_EndSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAntiCheatDedicatedClient_eventEndSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_EndSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAntiCheatDedicatedClient_eventEndSession_Parms), &Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_EndSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_EndSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_EndSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_EndSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAntiCheatDedicatedClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_EndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAntiCheatDedicatedClient, nullptr, "EndSession", nullptr, nullptr, sizeof(EOSAntiCheatDedicatedClient_eventEndSession_Parms), Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_EndSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_EndSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_EndSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_EndSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_EndSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_EndSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetApiVersion_Statics
	{
		struct EOSAntiCheatDedicatedClient_eventSetApiVersion_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAntiCheatDedicatedClient_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAntiCheatDedicatedClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAntiCheatDedicatedClient, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSAntiCheatDedicatedClient_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetupInternalCallback_Statics
	{
		struct EOSAntiCheatDedicatedClient_eventSetupInternalCallback_Parms
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
	void Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAntiCheatDedicatedClient_eventSetupInternalCallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetupInternalCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAntiCheatDedicatedClient_eventSetupInternalCallback_Parms), &Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetupInternalCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetupInternalCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetupInternalCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAntiCheatDedicatedClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetupInternalCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAntiCheatDedicatedClient, nullptr, "SetupInternalCallback", nullptr, nullptr, sizeof(EOSAntiCheatDedicatedClient_eventSetupInternalCallback_Parms), Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetupInternalCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetupInternalCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetupInternalCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetupInternalCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetupInternalCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetupInternalCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSAntiCheatDedicatedClient_NoRegister()
	{
		return UEOSAntiCheatDedicatedClient::StaticClass();
	}
	struct Z_Construct_UClass_UEOSAntiCheatDedicatedClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSAntiCheatDedicatedClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSIDs,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSAntiCheatDedicatedClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_BeginSession, "BeginSession" }, // 1979333163
		{ &Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_EndSession, "EndSession" }, // 966483959
		{ &Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetApiVersion, "SetApiVersion" }, // 1093926585
		{ &Z_Construct_UFunction_UEOSAntiCheatDedicatedClient_SetupInternalCallback, "SetupInternalCallback" }, // 1000903588
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAntiCheatDedicatedClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSAntiCheatDedicatedClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatDedicatedClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSAntiCheatDedicatedClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSAntiCheatDedicatedClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSAntiCheatDedicatedClient_Statics::ClassParams = {
		&UEOSAntiCheatDedicatedClient::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSAntiCheatDedicatedClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAntiCheatDedicatedClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSAntiCheatDedicatedClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSAntiCheatDedicatedClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSAntiCheatDedicatedClient, 4093271141);
	template<> YEOSSDK_API UClass* StaticClass<UEOSAntiCheatDedicatedClient>()
	{
		return UEOSAntiCheatDedicatedClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSAntiCheatDedicatedClient(Z_Construct_UClass_UEOSAntiCheatDedicatedClient, &UEOSAntiCheatDedicatedClient::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSAntiCheatDedicatedClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSAntiCheatDedicatedClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

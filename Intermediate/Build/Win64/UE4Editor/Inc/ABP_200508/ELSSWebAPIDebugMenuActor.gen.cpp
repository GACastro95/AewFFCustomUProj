// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWebAPIDebugMenuActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWebAPIDebugMenuActor() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWebAPIDebugMenuActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWebAPIDebugMenuActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2ErrorType();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSTitleStorageEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSTitleStorageBase_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageProgress();
// End Cross Module References
	DEFINE_FUNCTION(AELSSWebAPIDebugMenuActor::execonGetSSInfoIngest)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param_enYGS2ErrorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_pcYGS2RequestBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onGetSSInfoIngest(EYGS2ErrorType(Z_Param_enYGS2ErrorType),Z_Param_pcYGS2RequestBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWebAPIDebugMenuActor::execonGetSSMasterDataIngest)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param_enYGS2ErrorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_pcYGS2RequestBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onGetSSMasterDataIngest(EYGS2ErrorType(Z_Param_enYGS2ErrorType),Z_Param_pcYGS2RequestBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWebAPIDebugMenuActor::execonGetSSPlayerDataIngest)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param_enYGS2ErrorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_pcYGS2RequestBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onGetSSPlayerDataIngest(EYGS2ErrorType(Z_Param_enYGS2ErrorType),Z_Param_pcYGS2RequestBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWebAPIDebugMenuActor::execOnReadTitleStorage)
	{
		P_GET_ENUM(EEOSTitleStorageEvent,Z_Param_Event);
		P_GET_OBJECT(UEOSTitleStorageBase,Z_Param_TitleStorage);
		P_GET_STRUCT_REF(FEOSTitleStorageProgress,Z_Param_Out_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReadTitleStorage(EEOSTitleStorageEvent(Z_Param_Event),Z_Param_TitleStorage,Z_Param_Out_Progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWebAPIDebugMenuActor::execonSetSSGameResultIngest)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param_enYGS2ErrorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_pcYGS2RequestBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onSetSSGameResultIngest(EYGS2ErrorType(Z_Param_enYGS2ErrorType),Z_Param_pcYGS2RequestBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWebAPIDebugMenuActor::execonSetSSGameStartIngest)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param_enYGS2ErrorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_pcYGS2RequestBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onSetSSGameStartIngest(EYGS2ErrorType(Z_Param_enYGS2ErrorType),Z_Param_pcYGS2RequestBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWebAPIDebugMenuActor::execonSetSSSessionResultIngest)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param_enYGS2ErrorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_pcYGS2RequestBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onSetSSSessionResultIngest(EYGS2ErrorType(Z_Param_enYGS2ErrorType),Z_Param_pcYGS2RequestBase);
		P_NATIVE_END;
	}
	void AELSSWebAPIDebugMenuActor::StaticRegisterNativesAELSSWebAPIDebugMenuActor()
	{
		UClass* Class = AELSSWebAPIDebugMenuActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "onGetSSInfoIngest", &AELSSWebAPIDebugMenuActor::execonGetSSInfoIngest },
			{ "onGetSSMasterDataIngest", &AELSSWebAPIDebugMenuActor::execonGetSSMasterDataIngest },
			{ "onGetSSPlayerDataIngest", &AELSSWebAPIDebugMenuActor::execonGetSSPlayerDataIngest },
			{ "OnReadTitleStorage", &AELSSWebAPIDebugMenuActor::execOnReadTitleStorage },
			{ "onSetSSGameResultIngest", &AELSSWebAPIDebugMenuActor::execonSetSSGameResultIngest },
			{ "onSetSSGameStartIngest", &AELSSWebAPIDebugMenuActor::execonSetSSGameStartIngest },
			{ "onSetSSSessionResultIngest", &AELSSWebAPIDebugMenuActor::execonSetSSSessionResultIngest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest_Statics
	{
		struct ELSSWebAPIDebugMenuActor_eventonGetSSInfoIngest_Parms
		{
			EYGS2ErrorType enYGS2ErrorType;
			UYGS2RequestBase* pcYGS2RequestBase;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_enYGS2ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_enYGS2ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pcYGS2RequestBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest_Statics::NewProp_enYGS2ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest_Statics::NewProp_enYGS2ErrorType = { "enYGS2ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIDebugMenuActor_eventonGetSSInfoIngest_Parms, enYGS2ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest_Statics::NewProp_pcYGS2RequestBase = { "pcYGS2RequestBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIDebugMenuActor_eventonGetSSInfoIngest_Parms, pcYGS2RequestBase), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest_Statics::NewProp_enYGS2ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest_Statics::NewProp_enYGS2ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest_Statics::NewProp_pcYGS2RequestBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWebAPIDebugMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWebAPIDebugMenuActor, nullptr, "onGetSSInfoIngest", nullptr, nullptr, sizeof(ELSSWebAPIDebugMenuActor_eventonGetSSInfoIngest_Parms), Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest_Statics
	{
		struct ELSSWebAPIDebugMenuActor_eventonGetSSMasterDataIngest_Parms
		{
			EYGS2ErrorType enYGS2ErrorType;
			UYGS2RequestBase* pcYGS2RequestBase;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_enYGS2ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_enYGS2ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pcYGS2RequestBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest_Statics::NewProp_enYGS2ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest_Statics::NewProp_enYGS2ErrorType = { "enYGS2ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIDebugMenuActor_eventonGetSSMasterDataIngest_Parms, enYGS2ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest_Statics::NewProp_pcYGS2RequestBase = { "pcYGS2RequestBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIDebugMenuActor_eventonGetSSMasterDataIngest_Parms, pcYGS2RequestBase), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest_Statics::NewProp_enYGS2ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest_Statics::NewProp_enYGS2ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest_Statics::NewProp_pcYGS2RequestBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWebAPIDebugMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWebAPIDebugMenuActor, nullptr, "onGetSSMasterDataIngest", nullptr, nullptr, sizeof(ELSSWebAPIDebugMenuActor_eventonGetSSMasterDataIngest_Parms), Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest_Statics
	{
		struct ELSSWebAPIDebugMenuActor_eventonGetSSPlayerDataIngest_Parms
		{
			EYGS2ErrorType enYGS2ErrorType;
			UYGS2RequestBase* pcYGS2RequestBase;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_enYGS2ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_enYGS2ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pcYGS2RequestBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest_Statics::NewProp_enYGS2ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest_Statics::NewProp_enYGS2ErrorType = { "enYGS2ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIDebugMenuActor_eventonGetSSPlayerDataIngest_Parms, enYGS2ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest_Statics::NewProp_pcYGS2RequestBase = { "pcYGS2RequestBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIDebugMenuActor_eventonGetSSPlayerDataIngest_Parms, pcYGS2RequestBase), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest_Statics::NewProp_enYGS2ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest_Statics::NewProp_enYGS2ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest_Statics::NewProp_pcYGS2RequestBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWebAPIDebugMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWebAPIDebugMenuActor, nullptr, "onGetSSPlayerDataIngest", nullptr, nullptr, sizeof(ELSSWebAPIDebugMenuActor_eventonGetSSPlayerDataIngest_Parms), Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics
	{
		struct ELSSWebAPIDebugMenuActor_eventOnReadTitleStorage_Parms
		{
			EEOSTitleStorageEvent Event;
			UEOSTitleStorageBase* TitleStorage;
			FEOSTitleStorageProgress Progress;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Event_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleStorage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::NewProp_Event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIDebugMenuActor_eventOnReadTitleStorage_Parms, Event), Z_Construct_UEnum_yEOSSDK_EEOSTitleStorageEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::NewProp_TitleStorage = { "TitleStorage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIDebugMenuActor_eventOnReadTitleStorage_Parms, TitleStorage), Z_Construct_UClass_UEOSTitleStorageBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::NewProp_Progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIDebugMenuActor_eventOnReadTitleStorage_Parms, Progress), Z_Construct_UScriptStruct_FEOSTitleStorageProgress, METADATA_PARAMS(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::NewProp_Progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::NewProp_Event_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::NewProp_TitleStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWebAPIDebugMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWebAPIDebugMenuActor, nullptr, "OnReadTitleStorage", nullptr, nullptr, sizeof(ELSSWebAPIDebugMenuActor_eventOnReadTitleStorage_Parms), Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest_Statics
	{
		struct ELSSWebAPIDebugMenuActor_eventonSetSSGameResultIngest_Parms
		{
			EYGS2ErrorType enYGS2ErrorType;
			UYGS2RequestBase* pcYGS2RequestBase;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_enYGS2ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_enYGS2ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pcYGS2RequestBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest_Statics::NewProp_enYGS2ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest_Statics::NewProp_enYGS2ErrorType = { "enYGS2ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIDebugMenuActor_eventonSetSSGameResultIngest_Parms, enYGS2ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest_Statics::NewProp_pcYGS2RequestBase = { "pcYGS2RequestBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIDebugMenuActor_eventonSetSSGameResultIngest_Parms, pcYGS2RequestBase), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest_Statics::NewProp_enYGS2ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest_Statics::NewProp_enYGS2ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest_Statics::NewProp_pcYGS2RequestBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWebAPIDebugMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWebAPIDebugMenuActor, nullptr, "onSetSSGameResultIngest", nullptr, nullptr, sizeof(ELSSWebAPIDebugMenuActor_eventonSetSSGameResultIngest_Parms), Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest_Statics
	{
		struct ELSSWebAPIDebugMenuActor_eventonSetSSGameStartIngest_Parms
		{
			EYGS2ErrorType enYGS2ErrorType;
			UYGS2RequestBase* pcYGS2RequestBase;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_enYGS2ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_enYGS2ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pcYGS2RequestBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest_Statics::NewProp_enYGS2ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest_Statics::NewProp_enYGS2ErrorType = { "enYGS2ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIDebugMenuActor_eventonSetSSGameStartIngest_Parms, enYGS2ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest_Statics::NewProp_pcYGS2RequestBase = { "pcYGS2RequestBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIDebugMenuActor_eventonSetSSGameStartIngest_Parms, pcYGS2RequestBase), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest_Statics::NewProp_enYGS2ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest_Statics::NewProp_enYGS2ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest_Statics::NewProp_pcYGS2RequestBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWebAPIDebugMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWebAPIDebugMenuActor, nullptr, "onSetSSGameStartIngest", nullptr, nullptr, sizeof(ELSSWebAPIDebugMenuActor_eventonSetSSGameStartIngest_Parms), Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest_Statics
	{
		struct ELSSWebAPIDebugMenuActor_eventonSetSSSessionResultIngest_Parms
		{
			EYGS2ErrorType enYGS2ErrorType;
			UYGS2RequestBase* pcYGS2RequestBase;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_enYGS2ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_enYGS2ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pcYGS2RequestBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest_Statics::NewProp_enYGS2ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest_Statics::NewProp_enYGS2ErrorType = { "enYGS2ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIDebugMenuActor_eventonSetSSSessionResultIngest_Parms, enYGS2ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest_Statics::NewProp_pcYGS2RequestBase = { "pcYGS2RequestBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWebAPIDebugMenuActor_eventonSetSSSessionResultIngest_Parms, pcYGS2RequestBase), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest_Statics::NewProp_enYGS2ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest_Statics::NewProp_enYGS2ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest_Statics::NewProp_pcYGS2RequestBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWebAPIDebugMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWebAPIDebugMenuActor, nullptr, "onSetSSSessionResultIngest", nullptr, nullptr, sizeof(ELSSWebAPIDebugMenuActor_eventonSetSSSessionResultIngest_Parms), Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSWebAPIDebugMenuActor_NoRegister()
	{
		return AELSSWebAPIDebugMenuActor::StaticClass();
	}
	struct Z_Construct_UClass_AELSSWebAPIDebugMenuActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSWebAPIDebugMenuActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSWebAPIDebugMenuActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSInfoIngest, "onGetSSInfoIngest" }, // 394643187
		{ &Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSMasterDataIngest, "onGetSSMasterDataIngest" }, // 3473670649
		{ &Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onGetSSPlayerDataIngest, "onGetSSPlayerDataIngest" }, // 1623776121
		{ &Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_OnReadTitleStorage, "OnReadTitleStorage" }, // 3764466359
		{ &Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameResultIngest, "onSetSSGameResultIngest" }, // 352319162
		{ &Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSGameStartIngest, "onSetSSGameStartIngest" }, // 1679747011
		{ &Z_Construct_UFunction_AELSSWebAPIDebugMenuActor_onSetSSSessionResultIngest, "onSetSSSessionResultIngest" }, // 2807604935
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWebAPIDebugMenuActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWebAPIDebugMenuActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWebAPIDebugMenuActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSWebAPIDebugMenuActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSWebAPIDebugMenuActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSWebAPIDebugMenuActor_Statics::ClassParams = {
		&AELSSWebAPIDebugMenuActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSWebAPIDebugMenuActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWebAPIDebugMenuActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSWebAPIDebugMenuActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSWebAPIDebugMenuActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSWebAPIDebugMenuActor, 228858276);
	template<> ABP_200508_API UClass* StaticClass<AELSSWebAPIDebugMenuActor>()
	{
		return AELSSWebAPIDebugMenuActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSWebAPIDebugMenuActor(Z_Construct_UClass_AELSSWebAPIDebugMenuActor, &AELSSWebAPIDebugMenuActor::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSWebAPIDebugMenuActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSWebAPIDebugMenuActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameLiftObjectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftObjectBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UGameLiftObjectBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGameLiftObjectBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSTitleStorageEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSTitleStorageBase_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageProgress();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FPingData();
// End Cross Module References
	DEFINE_FUNCTION(UGameLiftObjectBase::execIsDownloadingSSModeServiceParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDownloadingSSModeServiceParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftObjectBase::execIsRegionInfoEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRegionInfoEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftObjectBase::execIsRegionLatencyUpdateEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRegionLatencyUpdateEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftObjectBase::execOnEnterSSMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnterSSMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftObjectBase::execOnExitSSMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitSSMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftObjectBase::execOnTitleStorageEvent)
	{
		P_GET_ENUM(EEOSTitleStorageEvent,Z_Param_inEvent);
		P_GET_OBJECT(UEOSTitleStorageBase,Z_Param_inTitleStorageBase);
		P_GET_STRUCT_REF(FEOSTitleStorageProgress,Z_Param_Out_inTitleStorageProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTitleStorageEvent(EEOSTitleStorageEvent(Z_Param_inEvent),Z_Param_inTitleStorageBase,Z_Param_Out_inTitleStorageProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftObjectBase::execOnUpdateSSModeServiceParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateSSModeServiceParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftObjectBase::execRequestDownloadSSModeServiceParam)
	{
		P_GET_UBOOL(Z_Param_inSSModeOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestDownloadSSModeServiceParam(Z_Param_inSSModeOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftObjectBase::execStartTargetRegionLatencyData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTargetRegionLatencyData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftObjectBase::execUpdateTargetRegionLatencyData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTargetRegionLatencyData();
		P_NATIVE_END;
	}
	void UGameLiftObjectBase::StaticRegisterNativesUGameLiftObjectBase()
	{
		UClass* Class = UGameLiftObjectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsDownloadingSSModeServiceParam", &UGameLiftObjectBase::execIsDownloadingSSModeServiceParam },
			{ "IsRegionInfoEnd", &UGameLiftObjectBase::execIsRegionInfoEnd },
			{ "IsRegionLatencyUpdateEnd", &UGameLiftObjectBase::execIsRegionLatencyUpdateEnd },
			{ "OnEnterSSMode", &UGameLiftObjectBase::execOnEnterSSMode },
			{ "OnExitSSMode", &UGameLiftObjectBase::execOnExitSSMode },
			{ "OnTitleStorageEvent", &UGameLiftObjectBase::execOnTitleStorageEvent },
			{ "OnUpdateSSModeServiceParam", &UGameLiftObjectBase::execOnUpdateSSModeServiceParam },
			{ "RequestDownloadSSModeServiceParam", &UGameLiftObjectBase::execRequestDownloadSSModeServiceParam },
			{ "StartTargetRegionLatencyData", &UGameLiftObjectBase::execStartTargetRegionLatencyData },
			{ "UpdateTargetRegionLatencyData", &UGameLiftObjectBase::execUpdateTargetRegionLatencyData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameLiftObjectBase_IsDownloadingSSModeServiceParam_Statics
	{
		struct GameLiftObjectBase_eventIsDownloadingSSModeServiceParam_Parms
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
	void Z_Construct_UFunction_UGameLiftObjectBase_IsDownloadingSSModeServiceParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftObjectBase_eventIsDownloadingSSModeServiceParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftObjectBase_IsDownloadingSSModeServiceParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftObjectBase_eventIsDownloadingSSModeServiceParam_Parms), &Z_Construct_UFunction_UGameLiftObjectBase_IsDownloadingSSModeServiceParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftObjectBase_IsDownloadingSSModeServiceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftObjectBase_IsDownloadingSSModeServiceParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftObjectBase_IsDownloadingSSModeServiceParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftObjectBase_IsDownloadingSSModeServiceParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftObjectBase, nullptr, "IsDownloadingSSModeServiceParam", nullptr, nullptr, sizeof(GameLiftObjectBase_eventIsDownloadingSSModeServiceParam_Parms), Z_Construct_UFunction_UGameLiftObjectBase_IsDownloadingSSModeServiceParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftObjectBase_IsDownloadingSSModeServiceParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftObjectBase_IsDownloadingSSModeServiceParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftObjectBase_IsDownloadingSSModeServiceParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftObjectBase_IsDownloadingSSModeServiceParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftObjectBase_IsDownloadingSSModeServiceParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftObjectBase_IsRegionInfoEnd_Statics
	{
		struct GameLiftObjectBase_eventIsRegionInfoEnd_Parms
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
	void Z_Construct_UFunction_UGameLiftObjectBase_IsRegionInfoEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftObjectBase_eventIsRegionInfoEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftObjectBase_IsRegionInfoEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftObjectBase_eventIsRegionInfoEnd_Parms), &Z_Construct_UFunction_UGameLiftObjectBase_IsRegionInfoEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftObjectBase_IsRegionInfoEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftObjectBase_IsRegionInfoEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftObjectBase_IsRegionInfoEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftObjectBase_IsRegionInfoEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftObjectBase, nullptr, "IsRegionInfoEnd", nullptr, nullptr, sizeof(GameLiftObjectBase_eventIsRegionInfoEnd_Parms), Z_Construct_UFunction_UGameLiftObjectBase_IsRegionInfoEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftObjectBase_IsRegionInfoEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftObjectBase_IsRegionInfoEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftObjectBase_IsRegionInfoEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftObjectBase_IsRegionInfoEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftObjectBase_IsRegionInfoEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftObjectBase_IsRegionLatencyUpdateEnd_Statics
	{
		struct GameLiftObjectBase_eventIsRegionLatencyUpdateEnd_Parms
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
	void Z_Construct_UFunction_UGameLiftObjectBase_IsRegionLatencyUpdateEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftObjectBase_eventIsRegionLatencyUpdateEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftObjectBase_IsRegionLatencyUpdateEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftObjectBase_eventIsRegionLatencyUpdateEnd_Parms), &Z_Construct_UFunction_UGameLiftObjectBase_IsRegionLatencyUpdateEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftObjectBase_IsRegionLatencyUpdateEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftObjectBase_IsRegionLatencyUpdateEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftObjectBase_IsRegionLatencyUpdateEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftObjectBase_IsRegionLatencyUpdateEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftObjectBase, nullptr, "IsRegionLatencyUpdateEnd", nullptr, nullptr, sizeof(GameLiftObjectBase_eventIsRegionLatencyUpdateEnd_Parms), Z_Construct_UFunction_UGameLiftObjectBase_IsRegionLatencyUpdateEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftObjectBase_IsRegionLatencyUpdateEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftObjectBase_IsRegionLatencyUpdateEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftObjectBase_IsRegionLatencyUpdateEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftObjectBase_IsRegionLatencyUpdateEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftObjectBase_IsRegionLatencyUpdateEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftObjectBase_OnEnterSSMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftObjectBase_OnEnterSSMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftObjectBase_OnEnterSSMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftObjectBase, nullptr, "OnEnterSSMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftObjectBase_OnEnterSSMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftObjectBase_OnEnterSSMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftObjectBase_OnEnterSSMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftObjectBase_OnEnterSSMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftObjectBase_OnExitSSMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftObjectBase_OnExitSSMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftObjectBase_OnExitSSMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftObjectBase, nullptr, "OnExitSSMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftObjectBase_OnExitSSMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftObjectBase_OnExitSSMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftObjectBase_OnExitSSMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftObjectBase_OnExitSSMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics
	{
		struct GameLiftObjectBase_eventOnTitleStorageEvent_Parms
		{
			EEOSTitleStorageEvent inEvent;
			UEOSTitleStorageBase* inTitleStorageBase;
			FEOSTitleStorageProgress inTitleStorageProgress;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTitleStorageBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inTitleStorageProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inTitleStorageProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::NewProp_inEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::NewProp_inEvent = { "inEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftObjectBase_eventOnTitleStorageEvent_Parms, inEvent), Z_Construct_UEnum_yEOSSDK_EEOSTitleStorageEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::NewProp_inTitleStorageBase = { "inTitleStorageBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftObjectBase_eventOnTitleStorageEvent_Parms, inTitleStorageBase), Z_Construct_UClass_UEOSTitleStorageBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::NewProp_inTitleStorageProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::NewProp_inTitleStorageProgress = { "inTitleStorageProgress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftObjectBase_eventOnTitleStorageEvent_Parms, inTitleStorageProgress), Z_Construct_UScriptStruct_FEOSTitleStorageProgress, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::NewProp_inTitleStorageProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::NewProp_inTitleStorageProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::NewProp_inEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::NewProp_inEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::NewProp_inTitleStorageBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::NewProp_inTitleStorageProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftObjectBase, nullptr, "OnTitleStorageEvent", nullptr, nullptr, sizeof(GameLiftObjectBase_eventOnTitleStorageEvent_Parms), Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftObjectBase_OnUpdateSSModeServiceParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftObjectBase_OnUpdateSSModeServiceParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftObjectBase_OnUpdateSSModeServiceParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftObjectBase, nullptr, "OnUpdateSSModeServiceParam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftObjectBase_OnUpdateSSModeServiceParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftObjectBase_OnUpdateSSModeServiceParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftObjectBase_OnUpdateSSModeServiceParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftObjectBase_OnUpdateSSModeServiceParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftObjectBase_RequestDownloadSSModeServiceParam_Statics
	{
		struct GameLiftObjectBase_eventRequestDownloadSSModeServiceParam_Parms
		{
			bool inSSModeOnly;
		};
		static void NewProp_inSSModeOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inSSModeOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameLiftObjectBase_RequestDownloadSSModeServiceParam_Statics::NewProp_inSSModeOnly_SetBit(void* Obj)
	{
		((GameLiftObjectBase_eventRequestDownloadSSModeServiceParam_Parms*)Obj)->inSSModeOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftObjectBase_RequestDownloadSSModeServiceParam_Statics::NewProp_inSSModeOnly = { "inSSModeOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftObjectBase_eventRequestDownloadSSModeServiceParam_Parms), &Z_Construct_UFunction_UGameLiftObjectBase_RequestDownloadSSModeServiceParam_Statics::NewProp_inSSModeOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftObjectBase_RequestDownloadSSModeServiceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftObjectBase_RequestDownloadSSModeServiceParam_Statics::NewProp_inSSModeOnly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftObjectBase_RequestDownloadSSModeServiceParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftObjectBase_RequestDownloadSSModeServiceParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftObjectBase, nullptr, "RequestDownloadSSModeServiceParam", nullptr, nullptr, sizeof(GameLiftObjectBase_eventRequestDownloadSSModeServiceParam_Parms), Z_Construct_UFunction_UGameLiftObjectBase_RequestDownloadSSModeServiceParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftObjectBase_RequestDownloadSSModeServiceParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftObjectBase_RequestDownloadSSModeServiceParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftObjectBase_RequestDownloadSSModeServiceParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftObjectBase_RequestDownloadSSModeServiceParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftObjectBase_RequestDownloadSSModeServiceParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftObjectBase_StartTargetRegionLatencyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftObjectBase_StartTargetRegionLatencyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftObjectBase_StartTargetRegionLatencyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftObjectBase, nullptr, "StartTargetRegionLatencyData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftObjectBase_StartTargetRegionLatencyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftObjectBase_StartTargetRegionLatencyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftObjectBase_StartTargetRegionLatencyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftObjectBase_StartTargetRegionLatencyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftObjectBase_UpdateTargetRegionLatencyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftObjectBase_UpdateTargetRegionLatencyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftObjectBase_UpdateTargetRegionLatencyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftObjectBase, nullptr, "UpdateTargetRegionLatencyData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftObjectBase_UpdateTargetRegionLatencyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftObjectBase_UpdateTargetRegionLatencyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftObjectBase_UpdateTargetRegionLatencyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftObjectBase_UpdateTargetRegionLatencyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameLiftObjectBase_NoRegister()
	{
		return UGameLiftObjectBase::StaticClass();
	}
	struct Z_Construct_UClass_UGameLiftObjectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastTitleStorageEvent_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTitleStorageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastTitleStorageEvent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_msTargetRegionData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_msTargetRegionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_msTargetRegionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameLiftObjectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameLiftObjectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameLiftObjectBase_IsDownloadingSSModeServiceParam, "IsDownloadingSSModeServiceParam" }, // 1075048384
		{ &Z_Construct_UFunction_UGameLiftObjectBase_IsRegionInfoEnd, "IsRegionInfoEnd" }, // 194166329
		{ &Z_Construct_UFunction_UGameLiftObjectBase_IsRegionLatencyUpdateEnd, "IsRegionLatencyUpdateEnd" }, // 3646993252
		{ &Z_Construct_UFunction_UGameLiftObjectBase_OnEnterSSMode, "OnEnterSSMode" }, // 2245183802
		{ &Z_Construct_UFunction_UGameLiftObjectBase_OnExitSSMode, "OnExitSSMode" }, // 1030583886
		{ &Z_Construct_UFunction_UGameLiftObjectBase_OnTitleStorageEvent, "OnTitleStorageEvent" }, // 4190437552
		{ &Z_Construct_UFunction_UGameLiftObjectBase_OnUpdateSSModeServiceParam, "OnUpdateSSModeServiceParam" }, // 730729326
		{ &Z_Construct_UFunction_UGameLiftObjectBase_RequestDownloadSSModeServiceParam, "RequestDownloadSSModeServiceParam" }, // 402753330
		{ &Z_Construct_UFunction_UGameLiftObjectBase_StartTargetRegionLatencyData, "StartTargetRegionLatencyData" }, // 1734352687
		{ &Z_Construct_UFunction_UGameLiftObjectBase_UpdateTargetRegionLatencyData, "UpdateTargetRegionLatencyData" }, // 3271888551
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftObjectBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameLiftObjectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameLiftObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameLiftObjectBase_Statics::NewProp_LastTitleStorageEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftObjectBase_Statics::NewProp_LastTitleStorageEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftObjectBase" },
		{ "ModuleRelativePath", "Public/GameLiftObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameLiftObjectBase_Statics::NewProp_LastTitleStorageEvent = { "LastTitleStorageEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameLiftObjectBase, LastTitleStorageEvent), Z_Construct_UEnum_yEOSSDK_EEOSTitleStorageEvent, METADATA_PARAMS(Z_Construct_UClass_UGameLiftObjectBase_Statics::NewProp_LastTitleStorageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameLiftObjectBase_Statics::NewProp_LastTitleStorageEvent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameLiftObjectBase_Statics::NewProp_msTargetRegionData_Inner = { "msTargetRegionData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftObjectBase_Statics::NewProp_msTargetRegionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftObjectBase" },
		{ "ModuleRelativePath", "Public/GameLiftObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameLiftObjectBase_Statics::NewProp_msTargetRegionData = { "msTargetRegionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameLiftObjectBase, msTargetRegionData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameLiftObjectBase_Statics::NewProp_msTargetRegionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameLiftObjectBase_Statics::NewProp_msTargetRegionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameLiftObjectBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLiftObjectBase_Statics::NewProp_LastTitleStorageEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLiftObjectBase_Statics::NewProp_LastTitleStorageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLiftObjectBase_Statics::NewProp_msTargetRegionData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLiftObjectBase_Statics::NewProp_msTargetRegionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameLiftObjectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameLiftObjectBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameLiftObjectBase_Statics::ClassParams = {
		&UGameLiftObjectBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameLiftObjectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameLiftObjectBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameLiftObjectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameLiftObjectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameLiftObjectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameLiftObjectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameLiftObjectBase, 73563446);
	template<> ABP_200508_API UClass* StaticClass<UGameLiftObjectBase>()
	{
		return UGameLiftObjectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameLiftObjectBase(Z_Construct_UClass_UGameLiftObjectBase, &UGameLiftObjectBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UGameLiftObjectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameLiftObjectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

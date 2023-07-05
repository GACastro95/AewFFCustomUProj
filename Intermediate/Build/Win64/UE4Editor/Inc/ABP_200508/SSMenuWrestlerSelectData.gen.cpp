// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSMenuWrestlerSelectData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSMenuWrestlerSelectData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USSMenuWrestlerSelectData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USSMenuWrestlerSelectData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerParam();
// End Cross Module References
	DEFINE_FUNCTION(USSMenuWrestlerSelectData::execGetSelectCustomWrestlerId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSelectCustomWrestlerId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USSMenuWrestlerSelectData::execGetSelectEditWrestlerPresetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSelectEditWrestlerPresetID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USSMenuWrestlerSelectData::execGetSelectEditWrestlerType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSWrestlerType*)Z_Param__Result=P_THIS->GetSelectEditWrestlerType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USSMenuWrestlerSelectData::execGetSelectWrestlerID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSelectWrestlerID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USSMenuWrestlerSelectData::execGetSelectWrestlerPanelId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSelectWrestlerPanelId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USSMenuWrestlerSelectData::execGetSelectWrestlerTypeId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetSelectWrestlerTypeId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USSMenuWrestlerSelectData::execGetWrestlerParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSWrestlerParam*)Z_Param__Result=P_THIS->GetWrestlerParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USSMenuWrestlerSelectData::execIsCustomWrestler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCustomWrestler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USSMenuWrestlerSelectData::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USSMenuWrestlerSelectData::execSetSelectEditWrestlerPresetId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectEditWrestlerPresetId(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USSMenuWrestlerSelectData::execSetSelectEditWrestlerType)
	{
		P_GET_ENUM(ESSWrestlerType,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectEditWrestlerType(ESSWrestlerType(Z_Param_ID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USSMenuWrestlerSelectData::execSetSelectWrestlerId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectWrestlerId(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USSMenuWrestlerSelectData::execSetSelectWrestlerPanelId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectWrestlerPanelId(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USSMenuWrestlerSelectData::execSetSelectWrestlerParam)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_selectWrestlerId);
		P_GET_PROPERTY(FIntProperty,Z_Param_EditWrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectWrestlerParam(EWrestlerID_N(Z_Param_selectWrestlerId),Z_Param_EditWrestlerID);
		P_NATIVE_END;
	}
	void USSMenuWrestlerSelectData::StaticRegisterNativesUSSMenuWrestlerSelectData()
	{
		UClass* Class = USSMenuWrestlerSelectData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectCustomWrestlerId", &USSMenuWrestlerSelectData::execGetSelectCustomWrestlerId },
			{ "GetSelectEditWrestlerPresetID", &USSMenuWrestlerSelectData::execGetSelectEditWrestlerPresetID },
			{ "GetSelectEditWrestlerType", &USSMenuWrestlerSelectData::execGetSelectEditWrestlerType },
			{ "GetSelectWrestlerID", &USSMenuWrestlerSelectData::execGetSelectWrestlerID },
			{ "GetSelectWrestlerPanelId", &USSMenuWrestlerSelectData::execGetSelectWrestlerPanelId },
			{ "GetSelectWrestlerTypeId", &USSMenuWrestlerSelectData::execGetSelectWrestlerTypeId },
			{ "GetWrestlerParam", &USSMenuWrestlerSelectData::execGetWrestlerParam },
			{ "IsCustomWrestler", &USSMenuWrestlerSelectData::execIsCustomWrestler },
			{ "Reset", &USSMenuWrestlerSelectData::execReset },
			{ "SetSelectEditWrestlerPresetId", &USSMenuWrestlerSelectData::execSetSelectEditWrestlerPresetId },
			{ "SetSelectEditWrestlerType", &USSMenuWrestlerSelectData::execSetSelectEditWrestlerType },
			{ "SetSelectWrestlerId", &USSMenuWrestlerSelectData::execSetSelectWrestlerId },
			{ "SetSelectWrestlerPanelId", &USSMenuWrestlerSelectData::execSetSelectWrestlerPanelId },
			{ "SetSelectWrestlerParam", &USSMenuWrestlerSelectData::execSetSelectWrestlerParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectCustomWrestlerId_Statics
	{
		struct SSMenuWrestlerSelectData_eventGetSelectCustomWrestlerId_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectCustomWrestlerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SSMenuWrestlerSelectData_eventGetSelectCustomWrestlerId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectCustomWrestlerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectCustomWrestlerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectCustomWrestlerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SSMenuWrestlerSelectData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectCustomWrestlerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSMenuWrestlerSelectData, nullptr, "GetSelectCustomWrestlerId", nullptr, nullptr, sizeof(SSMenuWrestlerSelectData_eventGetSelectCustomWrestlerId_Parms), Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectCustomWrestlerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectCustomWrestlerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectCustomWrestlerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectCustomWrestlerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectCustomWrestlerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectCustomWrestlerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerPresetID_Statics
	{
		struct SSMenuWrestlerSelectData_eventGetSelectEditWrestlerPresetID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerPresetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SSMenuWrestlerSelectData_eventGetSelectEditWrestlerPresetID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerPresetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerPresetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerPresetID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SSMenuWrestlerSelectData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerPresetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSMenuWrestlerSelectData, nullptr, "GetSelectEditWrestlerPresetID", nullptr, nullptr, sizeof(SSMenuWrestlerSelectData_eventGetSelectEditWrestlerPresetID_Parms), Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerPresetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerPresetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerPresetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerPresetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerPresetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerPresetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerType_Statics
	{
		struct SSMenuWrestlerSelectData_eventGetSelectEditWrestlerType_Parms
		{
			ESSWrestlerType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SSMenuWrestlerSelectData_eventGetSelectEditWrestlerType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SSMenuWrestlerSelectData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSMenuWrestlerSelectData, nullptr, "GetSelectEditWrestlerType", nullptr, nullptr, sizeof(SSMenuWrestlerSelectData_eventGetSelectEditWrestlerType_Parms), Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerID_Statics
	{
		struct SSMenuWrestlerSelectData_eventGetSelectWrestlerID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SSMenuWrestlerSelectData_eventGetSelectWrestlerID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SSMenuWrestlerSelectData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSMenuWrestlerSelectData, nullptr, "GetSelectWrestlerID", nullptr, nullptr, sizeof(SSMenuWrestlerSelectData_eventGetSelectWrestlerID_Parms), Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerPanelId_Statics
	{
		struct SSMenuWrestlerSelectData_eventGetSelectWrestlerPanelId_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerPanelId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SSMenuWrestlerSelectData_eventGetSelectWrestlerPanelId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerPanelId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerPanelId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerPanelId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SSMenuWrestlerSelectData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerPanelId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSMenuWrestlerSelectData, nullptr, "GetSelectWrestlerPanelId", nullptr, nullptr, sizeof(SSMenuWrestlerSelectData_eventGetSelectWrestlerPanelId_Parms), Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerPanelId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerPanelId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerPanelId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerPanelId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerPanelId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerPanelId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerTypeId_Statics
	{
		struct SSMenuWrestlerSelectData_eventGetSelectWrestlerTypeId_Parms
		{
			EWrestlerID_N ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerTypeId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerTypeId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SSMenuWrestlerSelectData_eventGetSelectWrestlerTypeId_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerTypeId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerTypeId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerTypeId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerTypeId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SSMenuWrestlerSelectData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerTypeId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSMenuWrestlerSelectData, nullptr, "GetSelectWrestlerTypeId", nullptr, nullptr, sizeof(SSMenuWrestlerSelectData_eventGetSelectWrestlerTypeId_Parms), Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerTypeId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerTypeId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerTypeId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerTypeId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerTypeId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerTypeId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USSMenuWrestlerSelectData_GetWrestlerParam_Statics
	{
		struct SSMenuWrestlerSelectData_eventGetWrestlerParam_Parms
		{
			FSSWrestlerParam ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_GetWrestlerParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SSMenuWrestlerSelectData_eventGetWrestlerParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSWrestlerParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSMenuWrestlerSelectData_GetWrestlerParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_GetWrestlerParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_GetWrestlerParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SSMenuWrestlerSelectData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USSMenuWrestlerSelectData_GetWrestlerParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSMenuWrestlerSelectData, nullptr, "GetWrestlerParam", nullptr, nullptr, sizeof(SSMenuWrestlerSelectData_eventGetWrestlerParam_Parms), Z_Construct_UFunction_USSMenuWrestlerSelectData_GetWrestlerParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetWrestlerParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetWrestlerParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_GetWrestlerParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USSMenuWrestlerSelectData_GetWrestlerParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USSMenuWrestlerSelectData_GetWrestlerParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USSMenuWrestlerSelectData_IsCustomWrestler_Statics
	{
		struct SSMenuWrestlerSelectData_eventIsCustomWrestler_Parms
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
	void Z_Construct_UFunction_USSMenuWrestlerSelectData_IsCustomWrestler_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SSMenuWrestlerSelectData_eventIsCustomWrestler_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_IsCustomWrestler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SSMenuWrestlerSelectData_eventIsCustomWrestler_Parms), &Z_Construct_UFunction_USSMenuWrestlerSelectData_IsCustomWrestler_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSMenuWrestlerSelectData_IsCustomWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_IsCustomWrestler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_IsCustomWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SSMenuWrestlerSelectData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USSMenuWrestlerSelectData_IsCustomWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSMenuWrestlerSelectData, nullptr, "IsCustomWrestler", nullptr, nullptr, sizeof(SSMenuWrestlerSelectData_eventIsCustomWrestler_Parms), Z_Construct_UFunction_USSMenuWrestlerSelectData_IsCustomWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_IsCustomWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_IsCustomWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_IsCustomWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USSMenuWrestlerSelectData_IsCustomWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USSMenuWrestlerSelectData_IsCustomWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USSMenuWrestlerSelectData_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SSMenuWrestlerSelectData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USSMenuWrestlerSelectData_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSMenuWrestlerSelectData, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USSMenuWrestlerSelectData_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USSMenuWrestlerSelectData_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerPresetId_Statics
	{
		struct SSMenuWrestlerSelectData_eventSetSelectEditWrestlerPresetId_Parms
		{
			int32 ID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerPresetId_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerPresetId_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SSMenuWrestlerSelectData_eventSetSelectEditWrestlerPresetId_Parms, ID), METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerPresetId_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerPresetId_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerPresetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerPresetId_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerPresetId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SSMenuWrestlerSelectData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerPresetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSMenuWrestlerSelectData, nullptr, "SetSelectEditWrestlerPresetId", nullptr, nullptr, sizeof(SSMenuWrestlerSelectData_eventSetSelectEditWrestlerPresetId_Parms), Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerPresetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerPresetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerPresetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerPresetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerPresetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerPresetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType_Statics
	{
		struct SSMenuWrestlerSelectData_eventSetSelectEditWrestlerType_Parms
		{
			ESSWrestlerType ID;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType_Statics::NewProp_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SSMenuWrestlerSelectData_eventSetSelectEditWrestlerType_Parms, ID), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType_Statics::NewProp_ID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SSMenuWrestlerSelectData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSMenuWrestlerSelectData, nullptr, "SetSelectEditWrestlerType", nullptr, nullptr, sizeof(SSMenuWrestlerSelectData_eventSetSelectEditWrestlerType_Parms), Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerId_Statics
	{
		struct SSMenuWrestlerSelectData_eventSetSelectWrestlerId_Parms
		{
			int32 ID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerId_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerId_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SSMenuWrestlerSelectData_eventSetSelectWrestlerId_Parms, ID), METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerId_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerId_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerId_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SSMenuWrestlerSelectData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSMenuWrestlerSelectData, nullptr, "SetSelectWrestlerId", nullptr, nullptr, sizeof(SSMenuWrestlerSelectData_eventSetSelectWrestlerId_Parms), Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerPanelId_Statics
	{
		struct SSMenuWrestlerSelectData_eventSetSelectWrestlerPanelId_Parms
		{
			int32 ID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerPanelId_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerPanelId_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SSMenuWrestlerSelectData_eventSetSelectWrestlerPanelId_Parms, ID), METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerPanelId_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerPanelId_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerPanelId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerPanelId_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerPanelId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SSMenuWrestlerSelectData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerPanelId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSMenuWrestlerSelectData, nullptr, "SetSelectWrestlerPanelId", nullptr, nullptr, sizeof(SSMenuWrestlerSelectData_eventSetSelectWrestlerPanelId_Parms), Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerPanelId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerPanelId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerPanelId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerPanelId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerPanelId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerPanelId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics
	{
		struct SSMenuWrestlerSelectData_eventSetSelectWrestlerParam_Parms
		{
			EWrestlerID_N selectWrestlerId;
			int32 EditWrestlerID;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_selectWrestlerId_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectWrestlerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_selectWrestlerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditWrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditWrestlerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::NewProp_selectWrestlerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::NewProp_selectWrestlerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::NewProp_selectWrestlerId = { "selectWrestlerId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SSMenuWrestlerSelectData_eventSetSelectWrestlerParam_Parms, selectWrestlerId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::NewProp_selectWrestlerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::NewProp_selectWrestlerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::NewProp_EditWrestlerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::NewProp_EditWrestlerID = { "EditWrestlerID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SSMenuWrestlerSelectData_eventSetSelectWrestlerParam_Parms, EditWrestlerID), METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::NewProp_EditWrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::NewProp_EditWrestlerID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::NewProp_selectWrestlerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::NewProp_selectWrestlerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::NewProp_EditWrestlerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SSMenuWrestlerSelectData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSMenuWrestlerSelectData, nullptr, "SetSelectWrestlerParam", nullptr, nullptr, sizeof(SSMenuWrestlerSelectData_eventSetSelectWrestlerParam_Parms), Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USSMenuWrestlerSelectData_NoRegister()
	{
		return USSMenuWrestlerSelectData::StaticClass();
	}
	struct Z_Construct_UClass_USSMenuWrestlerSelectData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USSMenuWrestlerSelectData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USSMenuWrestlerSelectData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectCustomWrestlerId, "GetSelectCustomWrestlerId" }, // 2744982746
		{ &Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerPresetID, "GetSelectEditWrestlerPresetID" }, // 54685668
		{ &Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectEditWrestlerType, "GetSelectEditWrestlerType" }, // 454408040
		{ &Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerID, "GetSelectWrestlerID" }, // 1486976966
		{ &Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerPanelId, "GetSelectWrestlerPanelId" }, // 3213764692
		{ &Z_Construct_UFunction_USSMenuWrestlerSelectData_GetSelectWrestlerTypeId, "GetSelectWrestlerTypeId" }, // 986960064
		{ &Z_Construct_UFunction_USSMenuWrestlerSelectData_GetWrestlerParam, "GetWrestlerParam" }, // 2317898408
		{ &Z_Construct_UFunction_USSMenuWrestlerSelectData_IsCustomWrestler, "IsCustomWrestler" }, // 2501542543
		{ &Z_Construct_UFunction_USSMenuWrestlerSelectData_Reset, "Reset" }, // 885695710
		{ &Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerPresetId, "SetSelectEditWrestlerPresetId" }, // 54655277
		{ &Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectEditWrestlerType, "SetSelectEditWrestlerType" }, // 2857040338
		{ &Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerId, "SetSelectWrestlerId" }, // 1547921190
		{ &Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerPanelId, "SetSelectWrestlerPanelId" }, // 696178999
		{ &Z_Construct_UFunction_USSMenuWrestlerSelectData_SetSelectWrestlerParam, "SetSelectWrestlerParam" }, // 4225477270
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USSMenuWrestlerSelectData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SSMenuWrestlerSelectData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SSMenuWrestlerSelectData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USSMenuWrestlerSelectData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USSMenuWrestlerSelectData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USSMenuWrestlerSelectData_Statics::ClassParams = {
		&USSMenuWrestlerSelectData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USSMenuWrestlerSelectData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USSMenuWrestlerSelectData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USSMenuWrestlerSelectData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USSMenuWrestlerSelectData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USSMenuWrestlerSelectData, 1841225137);
	template<> ABP_200508_API UClass* StaticClass<USSMenuWrestlerSelectData>()
	{
		return USSMenuWrestlerSelectData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USSMenuWrestlerSelectData(Z_Construct_UClass_USSMenuWrestlerSelectData, &USSMenuWrestlerSelectData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USSMenuWrestlerSelectData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USSMenuWrestlerSelectData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

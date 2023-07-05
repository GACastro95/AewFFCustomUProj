// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/WrestlerDataObjectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrestlerDataObjectBase() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UWrestlerDataObjectBase_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UWrestlerDataObjectBase();
	ELITE_CORE_API UClass* Z_Construct_UClass_UCommonObject();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerDataObjectFlag();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execAddWrestlerDataFlag)
	{
		P_GET_ENUM(EWrestlerDataObjectFlag,Z_Param_FlagType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWrestlerDataFlag(EWrestlerDataObjectFlag(Z_Param_FlagType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execCancelSaveRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelSaveRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execCheckModify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckModify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execClearAllWrestlerDataFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllWrestlerDataFlag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execGetCreateDate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetCreateDate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execGetGender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGender*)Z_Param__Result=P_THIS->GetGender();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execGetUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execGetWrestlerID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetWrestlerID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execHasWrestlerDataFlag)
	{
		P_GET_ENUM(EWrestlerDataObjectFlag,Z_Param_FlagType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasWrestlerDataFlag(EWrestlerDataObjectFlag(Z_Param_FlagType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execIsDisable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDisable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execIsEditable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEditable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execIsFemale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFemale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execIsLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execIsMale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execIsModify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsModify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execIsReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execIsRoster)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRoster();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execIsSaveTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSaveTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execIsScoutWrestler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsScoutWrestler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execIsUsingCareer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingCareer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execIsUsingCreateTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingCreateTeam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execRemoveWrestlerDataFlag)
	{
		P_GET_ENUM(EWrestlerDataObjectFlag,Z_Param_FlagType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWrestlerDataFlag(EWrestlerDataObjectFlag(Z_Param_FlagType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execSaveRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execSetWrestlerDataFlag)
	{
		P_GET_ENUM(EWrestlerDataObjectFlag,Z_Param_FlagType);
		P_GET_UBOOL(Z_Param_bNewFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWrestlerDataFlag(EWrestlerDataObjectFlag(Z_Param_FlagType),Z_Param_bNewFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrestlerDataObjectBase::execSwitchGender)
	{
		P_GET_ENUM_REF(EGender,Z_Param_Out_resultType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchGender((EGender&)(Z_Param_Out_resultType));
		P_NATIVE_END;
	}
	void UWrestlerDataObjectBase::StaticRegisterNativesUWrestlerDataObjectBase()
	{
		UClass* Class = UWrestlerDataObjectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWrestlerDataFlag", &UWrestlerDataObjectBase::execAddWrestlerDataFlag },
			{ "CancelSaveRequest", &UWrestlerDataObjectBase::execCancelSaveRequest },
			{ "CheckModify", &UWrestlerDataObjectBase::execCheckModify },
			{ "ClearAllWrestlerDataFlag", &UWrestlerDataObjectBase::execClearAllWrestlerDataFlag },
			{ "GetCreateDate", &UWrestlerDataObjectBase::execGetCreateDate },
			{ "GetGender", &UWrestlerDataObjectBase::execGetGender },
			{ "GetUID", &UWrestlerDataObjectBase::execGetUID },
			{ "GetWrestlerID", &UWrestlerDataObjectBase::execGetWrestlerID },
			{ "HasWrestlerDataFlag", &UWrestlerDataObjectBase::execHasWrestlerDataFlag },
			{ "IsDisable", &UWrestlerDataObjectBase::execIsDisable },
			{ "IsEditable", &UWrestlerDataObjectBase::execIsEditable },
			{ "IsFemale", &UWrestlerDataObjectBase::execIsFemale },
			{ "IsLocked", &UWrestlerDataObjectBase::execIsLocked },
			{ "IsMale", &UWrestlerDataObjectBase::execIsMale },
			{ "IsModify", &UWrestlerDataObjectBase::execIsModify },
			{ "IsReady", &UWrestlerDataObjectBase::execIsReady },
			{ "IsRoster", &UWrestlerDataObjectBase::execIsRoster },
			{ "IsSaveTarget", &UWrestlerDataObjectBase::execIsSaveTarget },
			{ "IsScoutWrestler", &UWrestlerDataObjectBase::execIsScoutWrestler },
			{ "IsUsingCareer", &UWrestlerDataObjectBase::execIsUsingCareer },
			{ "IsUsingCreateTeam", &UWrestlerDataObjectBase::execIsUsingCreateTeam },
			{ "RemoveWrestlerDataFlag", &UWrestlerDataObjectBase::execRemoveWrestlerDataFlag },
			{ "SaveRequest", &UWrestlerDataObjectBase::execSaveRequest },
			{ "SetWrestlerDataFlag", &UWrestlerDataObjectBase::execSetWrestlerDataFlag },
			{ "SwitchGender", &UWrestlerDataObjectBase::execSwitchGender },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag_Statics
	{
		struct WrestlerDataObjectBase_eventAddWrestlerDataFlag_Parms
		{
			EWrestlerDataObjectFlag FlagType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FlagType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FlagType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag_Statics::NewProp_FlagType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag_Statics::NewProp_FlagType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag_Statics::NewProp_FlagType = { "FlagType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerDataObjectBase_eventAddWrestlerDataFlag_Parms, FlagType), Z_Construct_UEnum_ELITE_Game_EWrestlerDataObjectFlag, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag_Statics::NewProp_FlagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag_Statics::NewProp_FlagType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag_Statics::NewProp_FlagType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag_Statics::NewProp_FlagType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "AddWrestlerDataFlag", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventAddWrestlerDataFlag_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_CancelSaveRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_CancelSaveRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_CancelSaveRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "CancelSaveRequest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_CancelSaveRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_CancelSaveRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_CancelSaveRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_CancelSaveRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_CheckModify_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_CheckModify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_CheckModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "CheckModify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_CheckModify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_CheckModify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_CheckModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_CheckModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_ClearAllWrestlerDataFlag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_ClearAllWrestlerDataFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_ClearAllWrestlerDataFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "ClearAllWrestlerDataFlag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_ClearAllWrestlerDataFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_ClearAllWrestlerDataFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_ClearAllWrestlerDataFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_ClearAllWrestlerDataFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_GetCreateDate_Statics
	{
		struct WrestlerDataObjectBase_eventGetCreateDate_Parms
		{
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_GetCreateDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerDataObjectBase_eventGetCreateDate_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_GetCreateDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_GetCreateDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_GetCreateDate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_GetCreateDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "GetCreateDate", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventGetCreateDate_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_GetCreateDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_GetCreateDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_GetCreateDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_GetCreateDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_GetCreateDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_GetCreateDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_GetGender_Statics
	{
		struct WrestlerDataObjectBase_eventGetGender_Parms
		{
			EGender ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_GetGender_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_GetGender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerDataObjectBase_eventGetGender_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_GetGender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_GetGender_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_GetGender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_GetGender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_GetGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "GetGender", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventGetGender_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_GetGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_GetGender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_GetGender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_GetGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_GetGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_GetGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_GetUID_Statics
	{
		struct WrestlerDataObjectBase_eventGetUID_Parms
		{
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_GetUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerDataObjectBase_eventGetUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_GetUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_GetUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_GetUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_GetUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "GetUID", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventGetUID_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_GetUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_GetUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_GetUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_GetUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_GetUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_GetUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_GetWrestlerID_Statics
	{
		struct WrestlerDataObjectBase_eventGetWrestlerID_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_GetWrestlerID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_GetWrestlerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerDataObjectBase_eventGetWrestlerID_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_GetWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_GetWrestlerID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_GetWrestlerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_GetWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_GetWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "GetWrestlerID", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventGetWrestlerID_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_GetWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_GetWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_GetWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_GetWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_GetWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_GetWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics
	{
		struct WrestlerDataObjectBase_eventHasWrestlerDataFlag_Parms
		{
			EWrestlerDataObjectFlag FlagType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FlagType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FlagType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::NewProp_FlagType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::NewProp_FlagType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::NewProp_FlagType = { "FlagType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerDataObjectBase_eventHasWrestlerDataFlag_Parms, FlagType), Z_Construct_UEnum_ELITE_Game_EWrestlerDataObjectFlag, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::NewProp_FlagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::NewProp_FlagType_MetaData)) };
	void Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerDataObjectBase_eventHasWrestlerDataFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerDataObjectBase_eventHasWrestlerDataFlag_Parms), &Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::NewProp_FlagType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::NewProp_FlagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "HasWrestlerDataFlag", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventHasWrestlerDataFlag_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_IsDisable_Statics
	{
		struct WrestlerDataObjectBase_eventIsDisable_Parms
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
	void Z_Construct_UFunction_UWrestlerDataObjectBase_IsDisable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerDataObjectBase_eventIsDisable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsDisable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerDataObjectBase_eventIsDisable_Parms), &Z_Construct_UFunction_UWrestlerDataObjectBase_IsDisable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_IsDisable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_IsDisable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_IsDisable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "IsDisable", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventIsDisable_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_IsDisable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsDisable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_IsDisable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsDisable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_IsDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_IsDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_IsEditable_Statics
	{
		struct WrestlerDataObjectBase_eventIsEditable_Parms
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
	void Z_Construct_UFunction_UWrestlerDataObjectBase_IsEditable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerDataObjectBase_eventIsEditable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsEditable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerDataObjectBase_eventIsEditable_Parms), &Z_Construct_UFunction_UWrestlerDataObjectBase_IsEditable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_IsEditable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_IsEditable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_IsEditable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsEditable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "IsEditable", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventIsEditable_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_IsEditable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsEditable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_IsEditable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsEditable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_IsEditable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_IsEditable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_IsFemale_Statics
	{
		struct WrestlerDataObjectBase_eventIsFemale_Parms
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
	void Z_Construct_UFunction_UWrestlerDataObjectBase_IsFemale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerDataObjectBase_eventIsFemale_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsFemale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerDataObjectBase_eventIsFemale_Parms), &Z_Construct_UFunction_UWrestlerDataObjectBase_IsFemale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_IsFemale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_IsFemale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_IsFemale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsFemale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "IsFemale", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventIsFemale_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_IsFemale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsFemale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_IsFemale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsFemale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_IsFemale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_IsFemale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_IsLocked_Statics
	{
		struct WrestlerDataObjectBase_eventIsLocked_Parms
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
	void Z_Construct_UFunction_UWrestlerDataObjectBase_IsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerDataObjectBase_eventIsLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerDataObjectBase_eventIsLocked_Parms), &Z_Construct_UFunction_UWrestlerDataObjectBase_IsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_IsLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_IsLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_IsLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "IsLocked", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventIsLocked_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_IsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_IsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_IsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_IsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_IsMale_Statics
	{
		struct WrestlerDataObjectBase_eventIsMale_Parms
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
	void Z_Construct_UFunction_UWrestlerDataObjectBase_IsMale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerDataObjectBase_eventIsMale_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsMale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerDataObjectBase_eventIsMale_Parms), &Z_Construct_UFunction_UWrestlerDataObjectBase_IsMale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_IsMale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_IsMale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_IsMale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsMale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "IsMale", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventIsMale_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_IsMale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsMale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_IsMale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsMale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_IsMale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_IsMale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_IsModify_Statics
	{
		struct WrestlerDataObjectBase_eventIsModify_Parms
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
	void Z_Construct_UFunction_UWrestlerDataObjectBase_IsModify_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerDataObjectBase_eventIsModify_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsModify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerDataObjectBase_eventIsModify_Parms), &Z_Construct_UFunction_UWrestlerDataObjectBase_IsModify_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_IsModify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_IsModify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_IsModify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "IsModify", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventIsModify_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_IsModify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsModify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_IsModify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsModify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_IsModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_IsModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_IsReady_Statics
	{
		struct WrestlerDataObjectBase_eventIsReady_Parms
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
	void Z_Construct_UFunction_UWrestlerDataObjectBase_IsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerDataObjectBase_eventIsReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerDataObjectBase_eventIsReady_Parms), &Z_Construct_UFunction_UWrestlerDataObjectBase_IsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_IsReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_IsReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_IsReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "IsReady", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventIsReady_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_IsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_IsReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_IsReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_IsReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_IsRoster_Statics
	{
		struct WrestlerDataObjectBase_eventIsRoster_Parms
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
	void Z_Construct_UFunction_UWrestlerDataObjectBase_IsRoster_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerDataObjectBase_eventIsRoster_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsRoster_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerDataObjectBase_eventIsRoster_Parms), &Z_Construct_UFunction_UWrestlerDataObjectBase_IsRoster_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_IsRoster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_IsRoster_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_IsRoster_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsRoster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "IsRoster", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventIsRoster_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_IsRoster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsRoster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_IsRoster_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsRoster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_IsRoster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_IsRoster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_IsSaveTarget_Statics
	{
		struct WrestlerDataObjectBase_eventIsSaveTarget_Parms
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
	void Z_Construct_UFunction_UWrestlerDataObjectBase_IsSaveTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerDataObjectBase_eventIsSaveTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsSaveTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerDataObjectBase_eventIsSaveTarget_Parms), &Z_Construct_UFunction_UWrestlerDataObjectBase_IsSaveTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_IsSaveTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_IsSaveTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_IsSaveTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsSaveTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "IsSaveTarget", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventIsSaveTarget_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_IsSaveTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsSaveTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_IsSaveTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsSaveTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_IsSaveTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_IsSaveTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_IsScoutWrestler_Statics
	{
		struct WrestlerDataObjectBase_eventIsScoutWrestler_Parms
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
	void Z_Construct_UFunction_UWrestlerDataObjectBase_IsScoutWrestler_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerDataObjectBase_eventIsScoutWrestler_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsScoutWrestler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerDataObjectBase_eventIsScoutWrestler_Parms), &Z_Construct_UFunction_UWrestlerDataObjectBase_IsScoutWrestler_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_IsScoutWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_IsScoutWrestler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_IsScoutWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsScoutWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "IsScoutWrestler", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventIsScoutWrestler_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_IsScoutWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsScoutWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_IsScoutWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsScoutWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_IsScoutWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_IsScoutWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCareer_Statics
	{
		struct WrestlerDataObjectBase_eventIsUsingCareer_Parms
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
	void Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCareer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerDataObjectBase_eventIsUsingCareer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCareer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerDataObjectBase_eventIsUsingCareer_Parms), &Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCareer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCareer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCareer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCareer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCareer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "IsUsingCareer", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventIsUsingCareer_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCareer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCareer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCareer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCareer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCareer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCareer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCreateTeam_Statics
	{
		struct WrestlerDataObjectBase_eventIsUsingCreateTeam_Parms
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
	void Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCreateTeam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WrestlerDataObjectBase_eventIsUsingCreateTeam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCreateTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerDataObjectBase_eventIsUsingCreateTeam_Parms), &Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCreateTeam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCreateTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCreateTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCreateTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCreateTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "IsUsingCreateTeam", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventIsUsingCreateTeam_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCreateTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCreateTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCreateTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCreateTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCreateTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCreateTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag_Statics
	{
		struct WrestlerDataObjectBase_eventRemoveWrestlerDataFlag_Parms
		{
			EWrestlerDataObjectFlag FlagType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FlagType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FlagType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag_Statics::NewProp_FlagType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag_Statics::NewProp_FlagType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag_Statics::NewProp_FlagType = { "FlagType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerDataObjectBase_eventRemoveWrestlerDataFlag_Parms, FlagType), Z_Construct_UEnum_ELITE_Game_EWrestlerDataObjectFlag, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag_Statics::NewProp_FlagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag_Statics::NewProp_FlagType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag_Statics::NewProp_FlagType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag_Statics::NewProp_FlagType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "RemoveWrestlerDataFlag", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventRemoveWrestlerDataFlag_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_SaveRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_SaveRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_SaveRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "SaveRequest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_SaveRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_SaveRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_SaveRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_SaveRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics
	{
		struct WrestlerDataObjectBase_eventSetWrestlerDataFlag_Parms
		{
			EWrestlerDataObjectFlag FlagType;
			bool bNewFlag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FlagType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FlagType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewFlag_MetaData[];
#endif
		static void NewProp_bNewFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::NewProp_FlagType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::NewProp_FlagType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::NewProp_FlagType = { "FlagType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerDataObjectBase_eventSetWrestlerDataFlag_Parms, FlagType), Z_Construct_UEnum_ELITE_Game_EWrestlerDataObjectFlag, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::NewProp_FlagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::NewProp_FlagType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::NewProp_bNewFlag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::NewProp_bNewFlag_SetBit(void* Obj)
	{
		((WrestlerDataObjectBase_eventSetWrestlerDataFlag_Parms*)Obj)->bNewFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::NewProp_bNewFlag = { "bNewFlag", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrestlerDataObjectBase_eventSetWrestlerDataFlag_Parms), &Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::NewProp_bNewFlag_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::NewProp_bNewFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::NewProp_bNewFlag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::NewProp_FlagType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::NewProp_FlagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::NewProp_bNewFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "SetWrestlerDataFlag", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventSetWrestlerDataFlag_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrestlerDataObjectBase_SwitchGender_Statics
	{
		struct WrestlerDataObjectBase_eventSwitchGender_Parms
		{
			EGender resultType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_resultType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_resultType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_SwitchGender_Statics::NewProp_resultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWrestlerDataObjectBase_SwitchGender_Statics::NewProp_resultType = { "resultType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrestlerDataObjectBase_eventSwitchGender_Parms, resultType), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrestlerDataObjectBase_SwitchGender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_SwitchGender_Statics::NewProp_resultType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrestlerDataObjectBase_SwitchGender_Statics::NewProp_resultType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrestlerDataObjectBase_SwitchGender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrestlerDataObjectBase_SwitchGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrestlerDataObjectBase, nullptr, "SwitchGender", nullptr, nullptr, sizeof(WrestlerDataObjectBase_eventSwitchGender_Parms), Z_Construct_UFunction_UWrestlerDataObjectBase_SwitchGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_SwitchGender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrestlerDataObjectBase_SwitchGender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrestlerDataObjectBase_SwitchGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrestlerDataObjectBase_SwitchGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrestlerDataObjectBase_SwitchGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWrestlerDataObjectBase_NoRegister()
	{
		return UWrestlerDataObjectBase::StaticClass();
	}
	struct Z_Construct_UClass_UWrestlerDataObjectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatusFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreateDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWrestlerDataObjectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWrestlerDataObjectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_AddWrestlerDataFlag, "AddWrestlerDataFlag" }, // 286633511
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_CancelSaveRequest, "CancelSaveRequest" }, // 198066101
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_CheckModify, "CheckModify" }, // 279972369
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_ClearAllWrestlerDataFlag, "ClearAllWrestlerDataFlag" }, // 1318982263
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_GetCreateDate, "GetCreateDate" }, // 362736004
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_GetGender, "GetGender" }, // 1303045790
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_GetUID, "GetUID" }, // 2200825626
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_GetWrestlerID, "GetWrestlerID" }, // 3524156346
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_HasWrestlerDataFlag, "HasWrestlerDataFlag" }, // 4142955680
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_IsDisable, "IsDisable" }, // 876558417
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_IsEditable, "IsEditable" }, // 599801657
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_IsFemale, "IsFemale" }, // 2883430799
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_IsLocked, "IsLocked" }, // 2343513567
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_IsMale, "IsMale" }, // 669209016
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_IsModify, "IsModify" }, // 2586741590
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_IsReady, "IsReady" }, // 4225143351
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_IsRoster, "IsRoster" }, // 2185775229
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_IsSaveTarget, "IsSaveTarget" }, // 1480336695
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_IsScoutWrestler, "IsScoutWrestler" }, // 3324097662
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCareer, "IsUsingCareer" }, // 1274677392
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_IsUsingCreateTeam, "IsUsingCreateTeam" }, // 4091823464
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_RemoveWrestlerDataFlag, "RemoveWrestlerDataFlag" }, // 137291346
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_SaveRequest, "SaveRequest" }, // 962766647
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_SetWrestlerDataFlag, "SetWrestlerDataFlag" }, // 4195248887
		{ &Z_Construct_UFunction_UWrestlerDataObjectBase_SwitchGender, "SwitchGender" }, // 1442719998
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrestlerDataObjectBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WrestlerDataObjectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrestlerDataObjectBase_Statics::NewProp_StatusFlags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerDataObjectBase" },
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWrestlerDataObjectBase_Statics::NewProp_StatusFlags = { "StatusFlags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrestlerDataObjectBase, StatusFlags), METADATA_PARAMS(Z_Construct_UClass_UWrestlerDataObjectBase_Statics::NewProp_StatusFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrestlerDataObjectBase_Statics::NewProp_StatusFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrestlerDataObjectBase_Statics::NewProp_CreateDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerDataObjectBase" },
		{ "ModuleRelativePath", "Public/WrestlerDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWrestlerDataObjectBase_Statics::NewProp_CreateDate = { "CreateDate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrestlerDataObjectBase, CreateDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UWrestlerDataObjectBase_Statics::NewProp_CreateDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrestlerDataObjectBase_Statics::NewProp_CreateDate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWrestlerDataObjectBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrestlerDataObjectBase_Statics::NewProp_StatusFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrestlerDataObjectBase_Statics::NewProp_CreateDate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWrestlerDataObjectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWrestlerDataObjectBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWrestlerDataObjectBase_Statics::ClassParams = {
		&UWrestlerDataObjectBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWrestlerDataObjectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWrestlerDataObjectBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWrestlerDataObjectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWrestlerDataObjectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWrestlerDataObjectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWrestlerDataObjectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWrestlerDataObjectBase, 2267052752);
	template<> ELITE_GAME_API UClass* StaticClass<UWrestlerDataObjectBase>()
	{
		return UWrestlerDataObjectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWrestlerDataObjectBase(Z_Construct_UClass_UWrestlerDataObjectBase, &UWrestlerDataObjectBase::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UWrestlerDataObjectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWrestlerDataObjectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

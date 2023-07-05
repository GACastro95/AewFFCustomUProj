// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSOutGameDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSOutGameDatabase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSOutGameDatabase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSOutGameDatabase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityParam();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMenuFinisherParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilitySortType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerTypeParam();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillTreeParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillIcon();
// End Cross Module References
	DEFINE_FUNCTION(AELSSOutGameDatabase::execGetAbilityParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSAbilityParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAbilityParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOutGameDatabase::execGetHeatSkillIconTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inHeatSkillId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetHeatSkillIconTexture(Z_Param_inHeatSkillId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOutGameDatabase::execGetHeatSkillIdAndLevelFromTree)
	{
		P_GET_ENUM(ESSHeatSkillCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inRow);
		P_GET_PROPERTY(FIntProperty,Z_Param_inColumn);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outHeatSkillId);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outConditionHeatLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHeatSkillIdAndLevelFromTree(ESSHeatSkillCategory(Z_Param_inCategory),Z_Param_inRow,Z_Param_inColumn,Z_Param_Out_outHeatSkillId,Z_Param_Out_outConditionHeatLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOutGameDatabase::execGetHeatSkillIdFromTree)
	{
		P_GET_ENUM(ESSHeatSkillCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inRow);
		P_GET_PROPERTY(FIntProperty,Z_Param_inColumn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHeatSkillIdFromTree(ESSHeatSkillCategory(Z_Param_inCategory),Z_Param_inRow,Z_Param_inColumn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOutGameDatabase::execGetHeatSkillParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSHeatSkillParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHeatSkillParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOutGameDatabase::execGetMenuFinisherParamArray)
	{
		P_GET_TARRAY_REF(FSSMenuFinisherParam,Z_Param_Out_outArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMenuFinisherParamArray(Z_Param_Out_outArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOutGameDatabase::execGetMenuFinisherParamById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inFinisherId);
		P_GET_STRUCT_REF(FSSMenuFinisherParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMenuFinisherParamById(Z_Param_inFinisherId,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOutGameDatabase::execGetMenuFinisherParamByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FSSMenuFinisherParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMenuFinisherParamByIndex(Z_Param_Index,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOutGameDatabase::execGetMenuFinisherParamCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMenuFinisherParamCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOutGameDatabase::execGetMoveParamById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MoveId);
		P_GET_STRUCT_REF(FSSMoveParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMoveParamById(Z_Param_MoveId,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOutGameDatabase::execGetSortedAbilityParamArray)
	{
		P_GET_ENUM(ESSAbilitySortType,Z_Param_inSortType);
		P_GET_TARRAY_REF(FSSAbilityParam,Z_Param_Out_outAbilityParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSortedAbilityParamArray(ESSAbilitySortType(Z_Param_inSortType),Z_Param_Out_outAbilityParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOutGameDatabase::execGetWrestlerParam)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_inWrestlerId);
		P_GET_STRUCT_REF(FSSWrestlerParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWrestlerParam(EWrestlerID_N(Z_Param_inWrestlerId),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOutGameDatabase::execGetWrestlerTypeParam)
	{
		P_GET_ENUM(ESSWrestlerType,Z_Param_inWrestlerType);
		P_GET_STRUCT_REF(FSSWrestlerTypeParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWrestlerTypeParam(ESSWrestlerType(Z_Param_inWrestlerType),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	void AELSSOutGameDatabase::StaticRegisterNativesAELSSOutGameDatabase()
	{
		UClass* Class = AELSSOutGameDatabase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAbilityParam", &AELSSOutGameDatabase::execGetAbilityParam },
			{ "GetHeatSkillIconTexture", &AELSSOutGameDatabase::execGetHeatSkillIconTexture },
			{ "GetHeatSkillIdAndLevelFromTree", &AELSSOutGameDatabase::execGetHeatSkillIdAndLevelFromTree },
			{ "GetHeatSkillIdFromTree", &AELSSOutGameDatabase::execGetHeatSkillIdFromTree },
			{ "GetHeatSkillParam", &AELSSOutGameDatabase::execGetHeatSkillParam },
			{ "GetMenuFinisherParamArray", &AELSSOutGameDatabase::execGetMenuFinisherParamArray },
			{ "GetMenuFinisherParamById", &AELSSOutGameDatabase::execGetMenuFinisherParamById },
			{ "GetMenuFinisherParamByIndex", &AELSSOutGameDatabase::execGetMenuFinisherParamByIndex },
			{ "GetMenuFinisherParamCount", &AELSSOutGameDatabase::execGetMenuFinisherParamCount },
			{ "GetMoveParamById", &AELSSOutGameDatabase::execGetMoveParamById },
			{ "GetSortedAbilityParamArray", &AELSSOutGameDatabase::execGetSortedAbilityParamArray },
			{ "GetWrestlerParam", &AELSSOutGameDatabase::execGetWrestlerParam },
			{ "GetWrestlerTypeParam", &AELSSOutGameDatabase::execGetWrestlerTypeParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics
	{
		struct ELSSOutGameDatabase_eventGetAbilityParam_Parms
		{
			int32 ID;
			FSSAbilityParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetAbilityParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetAbilityParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAbilityParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOutGameDatabase_eventGetAbilityParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOutGameDatabase_eventGetAbilityParam_Parms), &Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOutGameDatabase, nullptr, "GetAbilityParam", nullptr, nullptr, sizeof(ELSSOutGameDatabase_eventGetAbilityParam_Parms), Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIconTexture_Statics
	{
		struct ELSSOutGameDatabase_eventGetHeatSkillIconTexture_Parms
		{
			int32 inHeatSkillId;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatSkillId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIconTexture_Statics::NewProp_inHeatSkillId = { "inHeatSkillId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetHeatSkillIconTexture_Parms, inHeatSkillId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIconTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetHeatSkillIconTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIconTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIconTexture_Statics::NewProp_inHeatSkillId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIconTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIconTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIconTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOutGameDatabase, nullptr, "GetHeatSkillIconTexture", nullptr, nullptr, sizeof(ELSSOutGameDatabase_eventGetHeatSkillIconTexture_Parms), Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIconTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIconTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIconTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIconTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIconTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIconTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics
	{
		struct ELSSOutGameDatabase_eventGetHeatSkillIdAndLevelFromTree_Parms
		{
			ESSHeatSkillCategory inCategory;
			int32 inRow;
			int32 inColumn;
			int32 outHeatSkillId;
			int32 outConditionHeatLevel;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inRow;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inColumn;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outHeatSkillId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outConditionHeatLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetHeatSkillIdAndLevelFromTree_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inRow = { "inRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetHeatSkillIdAndLevelFromTree_Parms, inRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inColumn = { "inColumn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetHeatSkillIdAndLevelFromTree_Parms, inColumn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_outHeatSkillId = { "outHeatSkillId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetHeatSkillIdAndLevelFromTree_Parms, outHeatSkillId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_outConditionHeatLevel = { "outConditionHeatLevel", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetHeatSkillIdAndLevelFromTree_Parms, outConditionHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inColumn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_outHeatSkillId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_outConditionHeatLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOutGameDatabase, nullptr, "GetHeatSkillIdAndLevelFromTree", nullptr, nullptr, sizeof(ELSSOutGameDatabase_eventGetHeatSkillIdAndLevelFromTree_Parms), Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics
	{
		struct ELSSOutGameDatabase_eventGetHeatSkillIdFromTree_Parms
		{
			ESSHeatSkillCategory inCategory;
			int32 inRow;
			int32 inColumn;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inRow;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inColumn;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetHeatSkillIdFromTree_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::NewProp_inRow = { "inRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetHeatSkillIdFromTree_Parms, inRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::NewProp_inColumn = { "inColumn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetHeatSkillIdFromTree_Parms, inColumn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetHeatSkillIdFromTree_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::NewProp_inRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::NewProp_inColumn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOutGameDatabase, nullptr, "GetHeatSkillIdFromTree", nullptr, nullptr, sizeof(ELSSOutGameDatabase_eventGetHeatSkillIdFromTree_Parms), Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics
	{
		struct ELSSOutGameDatabase_eventGetHeatSkillParam_Parms
		{
			int32 ID;
			FSSHeatSkillParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetHeatSkillParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetHeatSkillParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSHeatSkillParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOutGameDatabase_eventGetHeatSkillParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOutGameDatabase_eventGetHeatSkillParam_Parms), &Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOutGameDatabase, nullptr, "GetHeatSkillParam", nullptr, nullptr, sizeof(ELSSOutGameDatabase_eventGetHeatSkillParam_Parms), Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics
	{
		struct ELSSOutGameDatabase_eventGetMenuFinisherParamArray_Parms
		{
			TArray<FSSMenuFinisherParam> outArray;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics::NewProp_outArray_Inner = { "outArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSMenuFinisherParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics::NewProp_outArray = { "outArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetMenuFinisherParamArray_Parms, outArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOutGameDatabase_eventGetMenuFinisherParamArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOutGameDatabase_eventGetMenuFinisherParamArray_Parms), &Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics::NewProp_outArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics::NewProp_outArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOutGameDatabase, nullptr, "GetMenuFinisherParamArray", nullptr, nullptr, sizeof(ELSSOutGameDatabase_eventGetMenuFinisherParamArray_Parms), Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics
	{
		struct ELSSOutGameDatabase_eventGetMenuFinisherParamById_Parms
		{
			int32 inFinisherId;
			FSSMenuFinisherParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inFinisherId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics::NewProp_inFinisherId = { "inFinisherId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetMenuFinisherParamById_Parms, inFinisherId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetMenuFinisherParamById_Parms, OutRow), Z_Construct_UScriptStruct_FSSMenuFinisherParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOutGameDatabase_eventGetMenuFinisherParamById_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOutGameDatabase_eventGetMenuFinisherParamById_Parms), &Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics::NewProp_inFinisherId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOutGameDatabase, nullptr, "GetMenuFinisherParamById", nullptr, nullptr, sizeof(ELSSOutGameDatabase_eventGetMenuFinisherParamById_Parms), Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics
	{
		struct ELSSOutGameDatabase_eventGetMenuFinisherParamByIndex_Parms
		{
			int32 Index;
			FSSMenuFinisherParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetMenuFinisherParamByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetMenuFinisherParamByIndex_Parms, OutRow), Z_Construct_UScriptStruct_FSSMenuFinisherParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOutGameDatabase_eventGetMenuFinisherParamByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOutGameDatabase_eventGetMenuFinisherParamByIndex_Parms), &Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOutGameDatabase, nullptr, "GetMenuFinisherParamByIndex", nullptr, nullptr, sizeof(ELSSOutGameDatabase_eventGetMenuFinisherParamByIndex_Parms), Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamCount_Statics
	{
		struct ELSSOutGameDatabase_eventGetMenuFinisherParamCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetMenuFinisherParamCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOutGameDatabase, nullptr, "GetMenuFinisherParamCount", nullptr, nullptr, sizeof(ELSSOutGameDatabase_eventGetMenuFinisherParamCount_Parms), Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics
	{
		struct ELSSOutGameDatabase_eventGetMoveParamById_Parms
		{
			int32 MoveId;
			FSSMoveParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetMoveParamById_Parms, MoveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetMoveParamById_Parms, OutRow), Z_Construct_UScriptStruct_FSSMoveParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOutGameDatabase_eventGetMoveParamById_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOutGameDatabase_eventGetMoveParamById_Parms), &Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics::NewProp_MoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOutGameDatabase, nullptr, "GetMoveParamById", nullptr, nullptr, sizeof(ELSSOutGameDatabase_eventGetMoveParamById_Parms), Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics
	{
		struct ELSSOutGameDatabase_eventGetSortedAbilityParamArray_Parms
		{
			ESSAbilitySortType inSortType;
			TArray<FSSAbilityParam> outAbilityParam;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inSortType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inSortType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outAbilityParam_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outAbilityParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics::NewProp_inSortType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics::NewProp_inSortType = { "inSortType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetSortedAbilityParamArray_Parms, inSortType), Z_Construct_UEnum_ABP_200508_ESSAbilitySortType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics::NewProp_outAbilityParam_Inner = { "outAbilityParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAbilityParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics::NewProp_outAbilityParam = { "outAbilityParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetSortedAbilityParamArray_Parms, outAbilityParam), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics::NewProp_inSortType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics::NewProp_inSortType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics::NewProp_outAbilityParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics::NewProp_outAbilityParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOutGameDatabase, nullptr, "GetSortedAbilityParamArray", nullptr, nullptr, sizeof(ELSSOutGameDatabase_eventGetSortedAbilityParamArray_Parms), Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics
	{
		struct ELSSOutGameDatabase_eventGetWrestlerParam_Parms
		{
			EWrestlerID_N inWrestlerId;
			FSSWrestlerParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::NewProp_inWrestlerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::NewProp_inWrestlerId = { "inWrestlerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetWrestlerParam_Parms, inWrestlerId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetWrestlerParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWrestlerParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOutGameDatabase_eventGetWrestlerParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOutGameDatabase_eventGetWrestlerParam_Parms), &Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::NewProp_inWrestlerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::NewProp_inWrestlerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOutGameDatabase, nullptr, "GetWrestlerParam", nullptr, nullptr, sizeof(ELSSOutGameDatabase_eventGetWrestlerParam_Parms), Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics
	{
		struct ELSSOutGameDatabase_eventGetWrestlerTypeParam_Parms
		{
			ESSWrestlerType inWrestlerType;
			FSSWrestlerTypeParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::NewProp_inWrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::NewProp_inWrestlerType = { "inWrestlerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetWrestlerTypeParam_Parms, inWrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameDatabase_eventGetWrestlerTypeParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWrestlerTypeParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOutGameDatabase_eventGetWrestlerTypeParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOutGameDatabase_eventGetWrestlerTypeParam_Parms), &Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::NewProp_inWrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::NewProp_inWrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOutGameDatabase, nullptr, "GetWrestlerTypeParam", nullptr, nullptr, sizeof(ELSSOutGameDatabase_eventGetWrestlerTypeParam_Parms), Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSOutGameDatabase_NoRegister()
	{
		return AELSSOutGameDatabase::StaticClass();
	}
	struct Z_Construct_UClass_AELSSOutGameDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WrestlerParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerTypeParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WrestlerTypeParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeatSkillParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeatSkillParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeatSkillParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillTreeParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeatSkillTreeParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeatSkillTreeParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillTreeParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeatSkillTreeParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillIconTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeatSkillIconTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeatSkillIconArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillIconArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeatSkillIconArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuFinisherParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuFinisherParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MenuFinisherParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuFinisherParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MenuFinisherParamArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSOutGameDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSOutGameDatabase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSOutGameDatabase_GetAbilityParam, "GetAbilityParam" }, // 1725398425
		{ &Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIconTexture, "GetHeatSkillIconTexture" }, // 3850580762
		{ &Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdAndLevelFromTree, "GetHeatSkillIdAndLevelFromTree" }, // 3244580328
		{ &Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillIdFromTree, "GetHeatSkillIdFromTree" }, // 1841186512
		{ &Z_Construct_UFunction_AELSSOutGameDatabase_GetHeatSkillParam, "GetHeatSkillParam" }, // 265485179
		{ &Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamArray, "GetMenuFinisherParamArray" }, // 1662117180
		{ &Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamById, "GetMenuFinisherParamById" }, // 2715899557
		{ &Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamByIndex, "GetMenuFinisherParamByIndex" }, // 10084951
		{ &Z_Construct_UFunction_AELSSOutGameDatabase_GetMenuFinisherParamCount, "GetMenuFinisherParamCount" }, // 3414749362
		{ &Z_Construct_UFunction_AELSSOutGameDatabase_GetMoveParamById, "GetMoveParamById" }, // 3399823463
		{ &Z_Construct_UFunction_AELSSOutGameDatabase_GetSortedAbilityParamArray, "GetSortedAbilityParamArray" }, // 1742692132
		{ &Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerParam, "GetWrestlerParam" }, // 135811287
		{ &Z_Construct_UFunction_AELSSOutGameDatabase_GetWrestlerTypeParam, "GetWrestlerTypeParam" }, // 2727519145
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSOutGameDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_WrestlerParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameDatabase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_WrestlerParamTable = { "WrestlerParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameDatabase, WrestlerParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_WrestlerParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_WrestlerParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_WrestlerTypeParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameDatabase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_WrestlerTypeParamTable = { "WrestlerTypeParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameDatabase, WrestlerTypeParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_WrestlerTypeParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_WrestlerTypeParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_AbilityParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameDatabase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_AbilityParamTable = { "AbilityParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameDatabase, AbilityParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_AbilityParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_AbilityParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_AbilityParamArray_Inner = { "AbilityParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAbilityParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_AbilityParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameDatabase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_AbilityParamArray = { "AbilityParamArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameDatabase, AbilityParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_AbilityParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_AbilityParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameDatabase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillParamTable = { "HeatSkillParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameDatabase, HeatSkillParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillParamArray_Inner = { "HeatSkillParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSHeatSkillParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameDatabase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillParamArray = { "HeatSkillParamArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameDatabase, HeatSkillParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillTreeParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameDatabase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillTreeParamTable = { "HeatSkillTreeParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameDatabase, HeatSkillTreeParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillTreeParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillTreeParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillTreeParamArray_Inner = { "HeatSkillTreeParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSHeatSkillTreeParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillTreeParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameDatabase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillTreeParamArray = { "HeatSkillTreeParamArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameDatabase, HeatSkillTreeParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillTreeParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillTreeParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillIconTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameDatabase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillIconTable = { "HeatSkillIconTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameDatabase, HeatSkillIconTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillIconTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillIconTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillIconArray_Inner = { "HeatSkillIconArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSHeatSkillIcon, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillIconArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameDatabase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillIconArray = { "HeatSkillIconArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameDatabase, HeatSkillIconArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillIconArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillIconArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MoveParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameDatabase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MoveParamTable = { "MoveParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameDatabase, MoveParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MoveParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MoveParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MenuFinisherParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameDatabase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MenuFinisherParamTable = { "MenuFinisherParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameDatabase, MenuFinisherParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MenuFinisherParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MenuFinisherParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MenuFinisherParamArray_Inner = { "MenuFinisherParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSMenuFinisherParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MenuFinisherParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameDatabase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MenuFinisherParamArray = { "MenuFinisherParamArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameDatabase, MenuFinisherParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MenuFinisherParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MenuFinisherParamArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSOutGameDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_WrestlerParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_WrestlerTypeParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_AbilityParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_AbilityParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_AbilityParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillTreeParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillTreeParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillTreeParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillIconTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillIconArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_HeatSkillIconArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MoveParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MenuFinisherParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MenuFinisherParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameDatabase_Statics::NewProp_MenuFinisherParamArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSOutGameDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSOutGameDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSOutGameDatabase_Statics::ClassParams = {
		&AELSSOutGameDatabase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSOutGameDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameDatabase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSOutGameDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSOutGameDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSOutGameDatabase, 1382326791);
	template<> ABP_200508_API UClass* StaticClass<AELSSOutGameDatabase>()
	{
		return AELSSOutGameDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSOutGameDatabase(Z_Construct_UClass_AELSSOutGameDatabase, &AELSSOutGameDatabase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSOutGameDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSOutGameDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

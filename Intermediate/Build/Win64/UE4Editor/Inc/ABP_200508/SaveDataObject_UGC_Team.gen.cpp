// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveDataObject_UGC_Team.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataObject_UGC_Team() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_UGC_Team_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_UGC_Team();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCreateTeamParam();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EFanReaction();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCreateTeamMemberInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execGetAnnounceId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAnnounceId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execGetCreatedDate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetCreatedDate(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execGetCreateTeamParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FCreateTeamParam,Z_Param_Out_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCreateTeamParam(Z_Param_Index,Z_Param_Out_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execGetCreateTeamParam_All)
	{
		P_GET_TARRAY_REF(FCreateTeamParam,Z_Param_Out_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCreateTeamParam_All(Z_Param_Out_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execGetCutScene)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELWrestlerProfile_CutScene*)Z_Param__Result=P_THIS->GetCutScene(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execGetFanReaction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFanReaction*)Z_Param__Result=P_THIS->GetFanReaction(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execGetLastModifiedDate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetLastModifiedDate(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execGetSnsName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSnsName(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execGetTagFinisher01)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELMoves_Finisher*)Z_Param__Result=P_THIS->GetTagFinisher01(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execGetTagFinisher02)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELMoves_Finisher*)Z_Param__Result=P_THIS->GetTagFinisher02(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execGetTeamMembers)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCreateTeamMemberInfo>*)Z_Param__Result=P_THIS->GetTeamMembers(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execGetTeamName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTeamName(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execGetTeamUID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetTeamUID(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execSetAnnounceId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param__AnnounceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnnounceId(Z_Param_Index,Z_Param__AnnounceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execSetCreatedDate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FDateTime,Z_Param_CreatedDate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCreatedDate(Z_Param_Index,Z_Param_CreatedDate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execSetCreateTeamParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FCreateTeamParam,Z_Param_Out_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCreateTeamParam(Z_Param_Index,Z_Param_Out_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execSetCreateTeamParam_All)
	{
		P_GET_TARRAY_REF(FCreateTeamParam,Z_Param_Out_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCreateTeamParam_All(Z_Param_Out_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execSetCutScene)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FELWrestlerProfile_CutScene,Z_Param__CutScene);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCutScene(Z_Param_Index,Z_Param__CutScene);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execSetFanReaction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_ENUM(EFanReaction,Z_Param__FanReaction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFanReaction(Z_Param_Index,EFanReaction(Z_Param__FanReaction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execSetLastModifiedDate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FDateTime,Z_Param_LastModifiedDate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLastModifiedDate(Z_Param_Index,Z_Param_LastModifiedDate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execSetSnsName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FStrProperty,Z_Param__SNSName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSnsName(Z_Param_Index,Z_Param__SNSName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execSetTagFinisher01)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FELMoves_Finisher,Z_Param_Out__TagFinisher);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTagFinisher01(Z_Param_Index,Z_Param_Out__TagFinisher);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execSetTagFinisher02)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FELMoves_Finisher,Z_Param_Out__TagFinisher);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTagFinisher02(Z_Param_Index,Z_Param_Out__TagFinisher);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execSetTeamMembers)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_TARRAY(FCreateTeamMemberInfo,Z_Param__TeamMembers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTeamMembers(Z_Param_Index,Z_Param__TeamMembers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execSetTeamName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FStrProperty,Z_Param__TeamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTeamName(Z_Param_Index,Z_Param__TeamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Team::execSetTeamUID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FGuid,Z_Param__TeamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTeamUID(Z_Param_Index,Z_Param__TeamID);
		P_NATIVE_END;
	}
	void USaveDataObject_UGC_Team::StaticRegisterNativesUSaveDataObject_UGC_Team()
	{
		UClass* Class = USaveDataObject_UGC_Team::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnnounceId", &USaveDataObject_UGC_Team::execGetAnnounceId },
			{ "GetCreatedDate", &USaveDataObject_UGC_Team::execGetCreatedDate },
			{ "GetCreateTeamParam", &USaveDataObject_UGC_Team::execGetCreateTeamParam },
			{ "GetCreateTeamParam_All", &USaveDataObject_UGC_Team::execGetCreateTeamParam_All },
			{ "GetCutScene", &USaveDataObject_UGC_Team::execGetCutScene },
			{ "GetFanReaction", &USaveDataObject_UGC_Team::execGetFanReaction },
			{ "GetLastModifiedDate", &USaveDataObject_UGC_Team::execGetLastModifiedDate },
			{ "GetSnsName", &USaveDataObject_UGC_Team::execGetSnsName },
			{ "GetTagFinisher01", &USaveDataObject_UGC_Team::execGetTagFinisher01 },
			{ "GetTagFinisher02", &USaveDataObject_UGC_Team::execGetTagFinisher02 },
			{ "GetTeamMembers", &USaveDataObject_UGC_Team::execGetTeamMembers },
			{ "GetTeamName", &USaveDataObject_UGC_Team::execGetTeamName },
			{ "GetTeamUID", &USaveDataObject_UGC_Team::execGetTeamUID },
			{ "SetAnnounceId", &USaveDataObject_UGC_Team::execSetAnnounceId },
			{ "SetCreatedDate", &USaveDataObject_UGC_Team::execSetCreatedDate },
			{ "SetCreateTeamParam", &USaveDataObject_UGC_Team::execSetCreateTeamParam },
			{ "SetCreateTeamParam_All", &USaveDataObject_UGC_Team::execSetCreateTeamParam_All },
			{ "SetCutScene", &USaveDataObject_UGC_Team::execSetCutScene },
			{ "SetFanReaction", &USaveDataObject_UGC_Team::execSetFanReaction },
			{ "SetLastModifiedDate", &USaveDataObject_UGC_Team::execSetLastModifiedDate },
			{ "SetSnsName", &USaveDataObject_UGC_Team::execSetSnsName },
			{ "SetTagFinisher01", &USaveDataObject_UGC_Team::execSetTagFinisher01 },
			{ "SetTagFinisher02", &USaveDataObject_UGC_Team::execSetTagFinisher02 },
			{ "SetTeamMembers", &USaveDataObject_UGC_Team::execSetTeamMembers },
			{ "SetTeamName", &USaveDataObject_UGC_Team::execSetTeamName },
			{ "SetTeamUID", &USaveDataObject_UGC_Team::execSetTeamUID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_GetAnnounceId_Statics
	{
		struct SaveDataObject_UGC_Team_eventGetAnnounceId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetAnnounceId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetAnnounceId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetAnnounceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetAnnounceId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_GetAnnounceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetAnnounceId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetAnnounceId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_GetAnnounceId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetAnnounceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "GetAnnounceId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventGetAnnounceId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_GetAnnounceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetAnnounceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetAnnounceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetAnnounceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_GetAnnounceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_GetAnnounceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreatedDate_Statics
	{
		struct SaveDataObject_UGC_Team_eventGetCreatedDate_Parms
		{
			int32 Index;
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreatedDate_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetCreatedDate_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreatedDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetCreatedDate_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreatedDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreatedDate_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreatedDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreatedDate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreatedDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "GetCreatedDate", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventGetCreatedDate_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreatedDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreatedDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreatedDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreatedDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreatedDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreatedDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_Statics
	{
		struct SaveDataObject_UGC_Team_eventGetCreateTeamParam_Parms
		{
			int32 Index;
			FCreateTeamParam Param;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetCreateTeamParam_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetCreateTeamParam_Parms, Param), Z_Construct_UScriptStruct_FCreateTeamParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "GetCreateTeamParam", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventGetCreateTeamParam_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_All_Statics
	{
		struct SaveDataObject_UGC_Team_eventGetCreateTeamParam_All_Parms
		{
			TArray<FCreateTeamParam> Param;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_All_Statics::NewProp_Param_Inner = { "Param", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCreateTeamParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_All_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetCreateTeamParam_All_Parms, Param), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_All_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_All_Statics::NewProp_Param_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_All_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_All_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_All_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "GetCreateTeamParam_All", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventGetCreateTeamParam_All_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_All_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_All_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_All_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_All_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_All()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_All_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCutScene_Statics
	{
		struct SaveDataObject_UGC_Team_eventGetCutScene_Parms
		{
			int32 Index;
			FELWrestlerProfile_CutScene ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCutScene_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetCutScene_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCutScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetCutScene_Parms, ReturnValue), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCutScene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCutScene_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCutScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCutScene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCutScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "GetCutScene", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventGetCutScene_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCutScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCutScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCutScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCutScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCutScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCutScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction_Statics
	{
		struct SaveDataObject_UGC_Team_eventGetFanReaction_Parms
		{
			int32 Index;
			EFanReaction ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetFanReaction_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetFanReaction_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EFanReaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "GetFanReaction", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventGetFanReaction_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_GetLastModifiedDate_Statics
	{
		struct SaveDataObject_UGC_Team_eventGetLastModifiedDate_Parms
		{
			int32 Index;
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetLastModifiedDate_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetLastModifiedDate_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetLastModifiedDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetLastModifiedDate_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_GetLastModifiedDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetLastModifiedDate_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetLastModifiedDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_GetLastModifiedDate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetLastModifiedDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "GetLastModifiedDate", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventGetLastModifiedDate_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_GetLastModifiedDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetLastModifiedDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetLastModifiedDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetLastModifiedDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_GetLastModifiedDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_GetLastModifiedDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_GetSnsName_Statics
	{
		struct SaveDataObject_UGC_Team_eventGetSnsName_Parms
		{
			int32 Index;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetSnsName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetSnsName_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetSnsName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetSnsName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_GetSnsName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetSnsName_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetSnsName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_GetSnsName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetSnsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "GetSnsName", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventGetSnsName_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_GetSnsName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetSnsName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetSnsName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetSnsName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_GetSnsName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_GetSnsName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher01_Statics
	{
		struct SaveDataObject_UGC_Team_eventGetTagFinisher01_Parms
		{
			int32 Index;
			FELMoves_Finisher ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher01_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetTagFinisher01_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher01_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetTagFinisher01_Parms, ReturnValue), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher01_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher01_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher01_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher01_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher01_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "GetTagFinisher01", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventGetTagFinisher01_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher01_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher01_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher01_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher01_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher01()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher01_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher02_Statics
	{
		struct SaveDataObject_UGC_Team_eventGetTagFinisher02_Parms
		{
			int32 Index;
			FELMoves_Finisher ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher02_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetTagFinisher02_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher02_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetTagFinisher02_Parms, ReturnValue), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher02_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher02_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher02_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher02_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher02_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "GetTagFinisher02", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventGetTagFinisher02_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher02_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher02_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher02_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher02_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher02()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher02_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers_Statics
	{
		struct SaveDataObject_UGC_Team_eventGetTeamMembers_Parms
		{
			int32 Index;
			TArray<FCreateTeamMemberInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetTeamMembers_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCreateTeamMemberInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetTeamMembers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "GetTeamMembers", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventGetTeamMembers_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamName_Statics
	{
		struct SaveDataObject_UGC_Team_eventGetTeamName_Parms
		{
			int32 Index;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetTeamName_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetTeamName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamName_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "GetTeamName", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventGetTeamName_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamUID_Statics
	{
		struct SaveDataObject_UGC_Team_eventGetTeamUID_Parms
		{
			int32 Index;
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamUID_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetTeamUID_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventGetTeamUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamUID_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "GetTeamUID", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventGetTeamUID_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_SetAnnounceId_Statics
	{
		struct SaveDataObject_UGC_Team_eventSetAnnounceId_Parms
		{
			int32 Index;
			int32 _AnnounceId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__AnnounceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetAnnounceId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetAnnounceId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetAnnounceId_Statics::NewProp__AnnounceId = { "_AnnounceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetAnnounceId_Parms, _AnnounceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_SetAnnounceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetAnnounceId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetAnnounceId_Statics::NewProp__AnnounceId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetAnnounceId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetAnnounceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "SetAnnounceId", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventSetAnnounceId_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_SetAnnounceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetAnnounceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetAnnounceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetAnnounceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_SetAnnounceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_SetAnnounceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreatedDate_Statics
	{
		struct SaveDataObject_UGC_Team_eventSetCreatedDate_Parms
		{
			int32 Index;
			FDateTime CreatedDate;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreatedDate_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetCreatedDate_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreatedDate_Statics::NewProp_CreatedDate = { "CreatedDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetCreatedDate_Parms, CreatedDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreatedDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreatedDate_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreatedDate_Statics::NewProp_CreatedDate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreatedDate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreatedDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "SetCreatedDate", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventSetCreatedDate_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreatedDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreatedDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreatedDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreatedDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreatedDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreatedDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_Statics
	{
		struct SaveDataObject_UGC_Team_eventSetCreateTeamParam_Parms
		{
			int32 Index;
			FCreateTeamParam Param;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetCreateTeamParam_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetCreateTeamParam_Parms, Param), Z_Construct_UScriptStruct_FCreateTeamParam, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "SetCreateTeamParam", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventSetCreateTeamParam_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All_Statics
	{
		struct SaveDataObject_UGC_Team_eventSetCreateTeamParam_All_Parms
		{
			TArray<FCreateTeamParam> Param;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All_Statics::NewProp_Param_Inner = { "Param", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCreateTeamParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetCreateTeamParam_All_Parms, Param), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All_Statics::NewProp_Param_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "SetCreateTeamParam_All", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventSetCreateTeamParam_All_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCutScene_Statics
	{
		struct SaveDataObject_UGC_Team_eventSetCutScene_Parms
		{
			int32 Index;
			FELWrestlerProfile_CutScene _CutScene;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__CutScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCutScene_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetCutScene_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCutScene_Statics::NewProp__CutScene = { "_CutScene", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetCutScene_Parms, _CutScene), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCutScene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCutScene_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCutScene_Statics::NewProp__CutScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCutScene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCutScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "SetCutScene", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventSetCutScene_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCutScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCutScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCutScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCutScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCutScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCutScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction_Statics
	{
		struct SaveDataObject_UGC_Team_eventSetFanReaction_Parms
		{
			int32 Index;
			EFanReaction _FanReaction;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__FanReaction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__FanReaction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetFanReaction_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction_Statics::NewProp__FanReaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction_Statics::NewProp__FanReaction = { "_FanReaction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetFanReaction_Parms, _FanReaction), Z_Construct_UEnum_ELITE_Game_EFanReaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction_Statics::NewProp__FanReaction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction_Statics::NewProp__FanReaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "SetFanReaction", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventSetFanReaction_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_SetLastModifiedDate_Statics
	{
		struct SaveDataObject_UGC_Team_eventSetLastModifiedDate_Parms
		{
			int32 Index;
			FDateTime LastModifiedDate;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastModifiedDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetLastModifiedDate_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetLastModifiedDate_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetLastModifiedDate_Statics::NewProp_LastModifiedDate = { "LastModifiedDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetLastModifiedDate_Parms, LastModifiedDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_SetLastModifiedDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetLastModifiedDate_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetLastModifiedDate_Statics::NewProp_LastModifiedDate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetLastModifiedDate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetLastModifiedDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "SetLastModifiedDate", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventSetLastModifiedDate_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_SetLastModifiedDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetLastModifiedDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetLastModifiedDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetLastModifiedDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_SetLastModifiedDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_SetLastModifiedDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName_Statics
	{
		struct SaveDataObject_UGC_Team_eventSetSnsName_Parms
		{
			int32 Index;
			FString _SNSName;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__SNSName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__SNSName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetSnsName_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName_Statics::NewProp__SNSName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName_Statics::NewProp__SNSName = { "_SNSName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetSnsName_Parms, _SNSName), METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName_Statics::NewProp__SNSName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName_Statics::NewProp__SNSName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName_Statics::NewProp__SNSName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "SetSnsName", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventSetSnsName_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01_Statics
	{
		struct SaveDataObject_UGC_Team_eventSetTagFinisher01_Parms
		{
			int32 Index;
			FELMoves_Finisher _TagFinisher;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__TagFinisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__TagFinisher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetTagFinisher01_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01_Statics::NewProp__TagFinisher_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01_Statics::NewProp__TagFinisher = { "_TagFinisher", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetTagFinisher01_Parms, _TagFinisher), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01_Statics::NewProp__TagFinisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01_Statics::NewProp__TagFinisher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01_Statics::NewProp__TagFinisher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "SetTagFinisher01", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventSetTagFinisher01_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02_Statics
	{
		struct SaveDataObject_UGC_Team_eventSetTagFinisher02_Parms
		{
			int32 Index;
			FELMoves_Finisher _TagFinisher;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__TagFinisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__TagFinisher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetTagFinisher02_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02_Statics::NewProp__TagFinisher_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02_Statics::NewProp__TagFinisher = { "_TagFinisher", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetTagFinisher02_Parms, _TagFinisher), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02_Statics::NewProp__TagFinisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02_Statics::NewProp__TagFinisher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02_Statics::NewProp__TagFinisher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "SetTagFinisher02", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventSetTagFinisher02_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers_Statics
	{
		struct SaveDataObject_UGC_Team_eventSetTeamMembers_Parms
		{
			int32 Index;
			TArray<FCreateTeamMemberInfo> _TeamMembers;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__TeamMembers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__TeamMembers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetTeamMembers_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers_Statics::NewProp__TeamMembers_Inner = { "_TeamMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCreateTeamMemberInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers_Statics::NewProp__TeamMembers = { "_TeamMembers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetTeamMembers_Parms, _TeamMembers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers_Statics::NewProp__TeamMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers_Statics::NewProp__TeamMembers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "SetTeamMembers", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventSetTeamMembers_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName_Statics
	{
		struct SaveDataObject_UGC_Team_eventSetTeamName_Parms
		{
			int32 Index;
			FString _TeamName;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__TeamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__TeamName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetTeamName_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName_Statics::NewProp__TeamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName_Statics::NewProp__TeamName = { "_TeamName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetTeamName_Parms, _TeamName), METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName_Statics::NewProp__TeamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName_Statics::NewProp__TeamName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName_Statics::NewProp__TeamName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "SetTeamName", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventSetTeamName_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamUID_Statics
	{
		struct SaveDataObject_UGC_Team_eventSetTeamUID_Parms
		{
			int32 Index;
			FGuid _TeamID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__TeamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamUID_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetTeamUID_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamUID_Statics::NewProp__TeamID = { "_TeamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Team_eventSetTeamUID_Parms, _TeamID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamUID_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamUID_Statics::NewProp__TeamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Team, nullptr, "SetTeamUID", nullptr, nullptr, sizeof(SaveDataObject_UGC_Team_eventSetTeamUID_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveDataObject_UGC_Team_NoRegister()
	{
		return USaveDataObject_UGC_Team::StaticClass();
	}
	struct Z_Construct_UClass_USaveDataObject_UGC_Team_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveDataObject_UGC_Team_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveDataObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveDataObject_UGC_Team_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_GetAnnounceId, "GetAnnounceId" }, // 1424717922
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreatedDate, "GetCreatedDate" }, // 3280233742
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam, "GetCreateTeamParam" }, // 1438559884
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCreateTeamParam_All, "GetCreateTeamParam_All" }, // 3774224046
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_GetCutScene, "GetCutScene" }, // 2529086703
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_GetFanReaction, "GetFanReaction" }, // 3798995148
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_GetLastModifiedDate, "GetLastModifiedDate" }, // 127215493
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_GetSnsName, "GetSnsName" }, // 903307436
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher01, "GetTagFinisher01" }, // 2065860432
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTagFinisher02, "GetTagFinisher02" }, // 862496585
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamMembers, "GetTeamMembers" }, // 580751744
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamName, "GetTeamName" }, // 3201261986
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_GetTeamUID, "GetTeamUID" }, // 4225669832
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_SetAnnounceId, "SetAnnounceId" }, // 614049081
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreatedDate, "SetCreatedDate" }, // 49072145
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam, "SetCreateTeamParam" }, // 2197041989
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCreateTeamParam_All, "SetCreateTeamParam_All" }, // 175772735
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_SetCutScene, "SetCutScene" }, // 2021577392
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_SetFanReaction, "SetFanReaction" }, // 1592792450
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_SetLastModifiedDate, "SetLastModifiedDate" }, // 3524022089
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_SetSnsName, "SetSnsName" }, // 692459865
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher01, "SetTagFinisher01" }, // 3594092161
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTagFinisher02, "SetTagFinisher02" }, // 1389069015
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamMembers, "SetTeamMembers" }, // 293419073
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamName, "SetTeamName" }, // 2103605138
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Team_SetTeamUID, "SetTeamUID" }, // 2891597537
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataObject_UGC_Team_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveDataObject_UGC_Team.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Team.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveDataObject_UGC_Team_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataObject_UGC_Team>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveDataObject_UGC_Team_Statics::ClassParams = {
		&USaveDataObject_UGC_Team::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USaveDataObject_UGC_Team_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataObject_UGC_Team_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveDataObject_UGC_Team()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveDataObject_UGC_Team_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveDataObject_UGC_Team, 611479268);
	template<> ABP_200508_API UClass* StaticClass<USaveDataObject_UGC_Team>()
	{
		return USaveDataObject_UGC_Team::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveDataObject_UGC_Team(Z_Construct_UClass_USaveDataObject_UGC_Team, &USaveDataObject_UGC_Team::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveDataObject_UGC_Team"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataObject_UGC_Team);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

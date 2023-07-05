// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELTitleUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTitleUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELTitleUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELTitleUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELBelt();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPersonParam();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELBeltParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELDisplayBeltType();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELTitleHolder();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam();
// End Cross Module References
	DEFINE_FUNCTION(UELTitleUtilityFunction::execBreakupTeam)
	{
		P_GET_STRUCT(FGuid,Z_Param_TeamUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELTitleUtilityFunction::BreakupTeam(Z_Param_TeamUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execCanChallengedTheTitle)
	{
		P_GET_ENUM(EELBelt,Z_Param_Belt);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELTitleUtilityFunction::CanChallengedTheTitle(EELBelt(Z_Param_Belt),EWrestlerID_N(Z_Param_WrestlerID),Z_Param_UID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execCanChallengedTheTitleAtEditWrestler)
	{
		P_GET_ENUM(EELBelt,Z_Param_Belt);
		P_GET_STRUCT(FEditPersonParam,Z_Param_EditPersonParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELTitleUtilityFunction::CanChallengedTheTitleAtEditWrestler(EELBelt(Z_Param_Belt),Z_Param_EditPersonParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execCheckChangedMyWrestlerEditParam)
	{
		P_GET_STRUCT(FEditPersonParam,Z_Param_NewMyWrestlerEditParam);
		P_GET_STRUCT(FEditPersonParam,Z_Param_PrevMyWrestlerEditParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELTitleUtilityFunction::CheckChangedMyWrestlerEditParam(Z_Param_NewMyWrestlerEditParam,Z_Param_PrevMyWrestlerEditParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execClearTitleHolder)
	{
		P_GET_ENUM(EELBelt,Z_Param_Belt);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELTitleUtilityFunction::ClearTitleHolder(EELBelt(Z_Param_Belt));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execDefendTitleHolder)
	{
		P_GET_ENUM(EELBelt,Z_Param_TargetBelt);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELTitleUtilityFunction::DefendTitleHolder(EELBelt(Z_Param_TargetBelt));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execDeleteTeam)
	{
		P_GET_STRUCT(FGuid,Z_Param_TeamUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELTitleUtilityFunction::DeleteTeam(Z_Param_TeamUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execExecuteFailSafeTitleHolder)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELTitleUtilityFunction::ExecuteFailSafeTitleHolder(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execGetBeltParam)
	{
		P_GET_STRUCT_REF(FELBeltParam,Z_Param_Out_BeltParam);
		P_GET_ENUM(EELBelt,Z_Param_Belt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELTitleUtilityFunction::GetBeltParam(Z_Param_Out_BeltParam,EELBelt(Z_Param_Belt));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execGetDefendCount)
	{
		P_GET_ENUM(EELBelt,Z_Param_TargetBelt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELTitleUtilityFunction::GetDefendCount(EELBelt(Z_Param_TargetBelt));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execGetDisplayTitleHolderText)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_ENUM(EELBelt,Z_Param_BeltType);
		P_GET_ENUM(EELDisplayBeltType,Z_Param_DisplayBeltType);
		P_GET_ENUM(EGender,Z_Param_Gender);
		P_GET_UBOOL(Z_Param_ValidNewLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELTitleUtilityFunction::GetDisplayTitleHolderText(Z_Param__pWorldContextObject,EELBelt(Z_Param_BeltType),EELDisplayBeltType(Z_Param_DisplayBeltType),EGender(Z_Param_Gender),Z_Param_ValidNewLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execGetEnableBeltList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<EELBelt>*)Z_Param__Result=UELTitleUtilityFunction::GetEnableBeltList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execGetHighestPriorityBelt)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_GET_UBOOL(Z_Param_PrioritizeTagBelt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EELBelt*)Z_Param__Result=UELTitleUtilityFunction::GetHighestPriorityBelt(EWrestlerID_N(Z_Param_WrestlerID),Z_Param_UID,Z_Param_PrioritizeTagBelt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execGetTitleHolder)
	{
		P_GET_ENUM(EELBelt,Z_Param_Belt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FELTitleHolder>*)Z_Param__Result=UELTitleUtilityFunction::GetTitleHolder(EELBelt(Z_Param_Belt));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execGetTitleList)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<EELBelt>*)Z_Param__Result=UELTitleUtilityFunction::GetTitleList(EWrestlerID_N(Z_Param_WrestlerID),Z_Param_UID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execGetWrestlerAttachedBelts)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_GET_UBOOL(Z_Param_PrioritizeTagBelt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<EELBelt>*)Z_Param__Result=UELTitleUtilityFunction::GetWrestlerAttachedBelts(EWrestlerID_N(Z_Param_WrestlerID),Z_Param_UID,Z_Param_PrioritizeTagBelt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execIsSameTitleHolderParam)
	{
		P_GET_STRUCT(FELTitleHolder,Z_Param__paramA);
		P_GET_STRUCT(FELTitleHolder,Z_Param__paramB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELTitleUtilityFunction::IsSameTitleHolderParam(Z_Param__paramA,Z_Param__paramB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execIsValidBelt)
	{
		P_GET_ENUM(EELBelt,Z_Param_BeltType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELTitleUtilityFunction::IsValidBelt(EELBelt(Z_Param_BeltType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execMakeBeltInfoForUpdateTitleHolder)
	{
		P_GET_STRUCT_REF(FELTitleWrestlerSelectParam,Z_Param_Out_WinnerWrestler);
		P_GET_TARRAY_REF(EELBelt,Z_Param_Out_BeltList);
		P_GET_TARRAY_REF(EELBelt,Z_Param_Out_DefendBeltList);
		P_GET_TARRAY_REF(FELTitleWrestlerSelectParam,Z_Param_Out_WrestlerList);
		P_GET_PROPERTY(FIntProperty,Z_Param_WinnerTeamNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELTitleUtilityFunction::MakeBeltInfoForUpdateTitleHolder(Z_Param_Out_WinnerWrestler,Z_Param_Out_BeltList,Z_Param_Out_DefendBeltList,Z_Param_Out_WrestlerList,Z_Param_WinnerTeamNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execMakeBeltInfoForUpdateTitleHolder_Tag)
	{
		P_GET_TARRAY_REF(FELTitleWrestlerSelectParam,Z_Param_Out_WinnerWrestlers);
		P_GET_TARRAY_REF(EELBelt,Z_Param_Out_BeltList);
		P_GET_TARRAY_REF(FELTitleWrestlerSelectParam,Z_Param_Out_WrestlerList);
		P_GET_PROPERTY(FIntProperty,Z_Param_WinnerTeamNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELTitleUtilityFunction::MakeBeltInfoForUpdateTitleHolder_Tag(Z_Param_Out_WinnerWrestlers,Z_Param_Out_BeltList,Z_Param_Out_WrestlerList,Z_Param_WinnerTeamNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execSetTitleHolder)
	{
		P_GET_ENUM(EELBelt,Z_Param_Belt);
		P_GET_UBOOL(Z_Param_TagMember);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELTitleUtilityFunction::SetTitleHolder(EELBelt(Z_Param_Belt),Z_Param_TagMember,EWrestlerID_N(Z_Param_WrestlerID),Z_Param_UID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execSetTitleHolder_Single)
	{
		P_GET_ENUM(EELBelt,Z_Param_Belt);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELTitleUtilityFunction::SetTitleHolder_Single(EELBelt(Z_Param_Belt),EWrestlerID_N(Z_Param_WrestlerID),Z_Param_UID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execSetTitleHolder_Tag)
	{
		P_GET_ENUM(EELBelt,Z_Param_Belt);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID_0);
		P_GET_STRUCT(FGuid,Z_Param_UID_0);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID_1);
		P_GET_STRUCT(FGuid,Z_Param_UID_1);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELTitleUtilityFunction::SetTitleHolder_Tag(EELBelt(Z_Param_Belt),EWrestlerID_N(Z_Param_WrestlerID_0),Z_Param_UID_0,EWrestlerID_N(Z_Param_WrestlerID_1),Z_Param_UID_1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execSetTitleHolderAtEditWrestler)
	{
		P_GET_ENUM(EELBelt,Z_Param_Belt);
		P_GET_UBOOL(Z_Param_TagMember);
		P_GET_STRUCT(FEditPersonParam,Z_Param_EditPersonParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELTitleUtilityFunction::SetTitleHolderAtEditWrestler(EELBelt(Z_Param_Belt),Z_Param_TagMember,Z_Param_EditPersonParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTitleUtilityFunction::execSortByPriority)
	{
		P_GET_TARRAY_REF(EELBelt,Z_Param_Out_Out);
		P_GET_TARRAY_REF(EELBelt,Z_Param_Out_In);
		P_GET_UBOOL(Z_Param_PrioritizeTagBelt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELTitleUtilityFunction::SortByPriority(Z_Param_Out_Out,Z_Param_Out_In,Z_Param_PrioritizeTagBelt);
		P_NATIVE_END;
	}
	void UELTitleUtilityFunction::StaticRegisterNativesUELTitleUtilityFunction()
	{
		UClass* Class = UELTitleUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakupTeam", &UELTitleUtilityFunction::execBreakupTeam },
			{ "CanChallengedTheTitle", &UELTitleUtilityFunction::execCanChallengedTheTitle },
			{ "CanChallengedTheTitleAtEditWrestler", &UELTitleUtilityFunction::execCanChallengedTheTitleAtEditWrestler },
			{ "CheckChangedMyWrestlerEditParam", &UELTitleUtilityFunction::execCheckChangedMyWrestlerEditParam },
			{ "ClearTitleHolder", &UELTitleUtilityFunction::execClearTitleHolder },
			{ "DefendTitleHolder", &UELTitleUtilityFunction::execDefendTitleHolder },
			{ "DeleteTeam", &UELTitleUtilityFunction::execDeleteTeam },
			{ "ExecuteFailSafeTitleHolder", &UELTitleUtilityFunction::execExecuteFailSafeTitleHolder },
			{ "GetBeltParam", &UELTitleUtilityFunction::execGetBeltParam },
			{ "GetDefendCount", &UELTitleUtilityFunction::execGetDefendCount },
			{ "GetDisplayTitleHolderText", &UELTitleUtilityFunction::execGetDisplayTitleHolderText },
			{ "GetEnableBeltList", &UELTitleUtilityFunction::execGetEnableBeltList },
			{ "GetHighestPriorityBelt", &UELTitleUtilityFunction::execGetHighestPriorityBelt },
			{ "GetTitleHolder", &UELTitleUtilityFunction::execGetTitleHolder },
			{ "GetTitleList", &UELTitleUtilityFunction::execGetTitleList },
			{ "GetWrestlerAttachedBelts", &UELTitleUtilityFunction::execGetWrestlerAttachedBelts },
			{ "IsSameTitleHolderParam", &UELTitleUtilityFunction::execIsSameTitleHolderParam },
			{ "IsValidBelt", &UELTitleUtilityFunction::execIsValidBelt },
			{ "MakeBeltInfoForUpdateTitleHolder", &UELTitleUtilityFunction::execMakeBeltInfoForUpdateTitleHolder },
			{ "MakeBeltInfoForUpdateTitleHolder_Tag", &UELTitleUtilityFunction::execMakeBeltInfoForUpdateTitleHolder_Tag },
			{ "SetTitleHolder", &UELTitleUtilityFunction::execSetTitleHolder },
			{ "SetTitleHolder_Single", &UELTitleUtilityFunction::execSetTitleHolder_Single },
			{ "SetTitleHolder_Tag", &UELTitleUtilityFunction::execSetTitleHolder_Tag },
			{ "SetTitleHolderAtEditWrestler", &UELTitleUtilityFunction::execSetTitleHolderAtEditWrestler },
			{ "SortByPriority", &UELTitleUtilityFunction::execSortByPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_BreakupTeam_Statics
	{
		struct ELTitleUtilityFunction_eventBreakupTeam_Parms
		{
			FGuid TeamUID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_BreakupTeam_Statics::NewProp_TeamUID = { "TeamUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventBreakupTeam_Parms, TeamUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_BreakupTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_BreakupTeam_Statics::NewProp_TeamUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_BreakupTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_BreakupTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "BreakupTeam", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventBreakupTeam_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_BreakupTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_BreakupTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_BreakupTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_BreakupTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_BreakupTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_BreakupTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics
	{
		struct ELTitleUtilityFunction_eventCanChallengedTheTitle_Parms
		{
			EELBelt Belt;
			EWrestlerID_N WrestlerID;
			FGuid UID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Belt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Belt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::NewProp_Belt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::NewProp_Belt = { "Belt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventCanChallengedTheTitle_Parms, Belt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventCanChallengedTheTitle_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventCanChallengedTheTitle_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventCanChallengedTheTitle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventCanChallengedTheTitle_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::NewProp_Belt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::NewProp_Belt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "CanChallengedTheTitle", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventCanChallengedTheTitle_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics
	{
		struct ELTitleUtilityFunction_eventCanChallengedTheTitleAtEditWrestler_Parms
		{
			EELBelt Belt;
			FEditPersonParam EditPersonParam;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Belt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Belt;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditPersonParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::NewProp_Belt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::NewProp_Belt = { "Belt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventCanChallengedTheTitleAtEditWrestler_Parms, Belt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::NewProp_EditPersonParam = { "EditPersonParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventCanChallengedTheTitleAtEditWrestler_Parms, EditPersonParam), Z_Construct_UScriptStruct_FEditPersonParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventCanChallengedTheTitleAtEditWrestler_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventCanChallengedTheTitleAtEditWrestler_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::NewProp_Belt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::NewProp_Belt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::NewProp_EditPersonParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "CanChallengedTheTitleAtEditWrestler", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventCanChallengedTheTitleAtEditWrestler_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics
	{
		struct ELTitleUtilityFunction_eventCheckChangedMyWrestlerEditParam_Parms
		{
			FEditPersonParam NewMyWrestlerEditParam;
			FEditPersonParam PrevMyWrestlerEditParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMyWrestlerEditParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewMyWrestlerEditParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevMyWrestlerEditParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevMyWrestlerEditParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::NewProp_NewMyWrestlerEditParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::NewProp_NewMyWrestlerEditParam = { "NewMyWrestlerEditParam", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventCheckChangedMyWrestlerEditParam_Parms, NewMyWrestlerEditParam), Z_Construct_UScriptStruct_FEditPersonParam, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::NewProp_NewMyWrestlerEditParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::NewProp_NewMyWrestlerEditParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::NewProp_PrevMyWrestlerEditParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::NewProp_PrevMyWrestlerEditParam = { "PrevMyWrestlerEditParam", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventCheckChangedMyWrestlerEditParam_Parms, PrevMyWrestlerEditParam), Z_Construct_UScriptStruct_FEditPersonParam, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::NewProp_PrevMyWrestlerEditParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::NewProp_PrevMyWrestlerEditParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::NewProp_NewMyWrestlerEditParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::NewProp_PrevMyWrestlerEditParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "CheckChangedMyWrestlerEditParam", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventCheckChangedMyWrestlerEditParam_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_ClearTitleHolder_Statics
	{
		struct ELTitleUtilityFunction_eventClearTitleHolder_Parms
		{
			EELBelt Belt;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Belt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Belt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_ClearTitleHolder_Statics::NewProp_Belt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_ClearTitleHolder_Statics::NewProp_Belt = { "Belt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventClearTitleHolder_Parms, Belt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_ClearTitleHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_ClearTitleHolder_Statics::NewProp_Belt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_ClearTitleHolder_Statics::NewProp_Belt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_ClearTitleHolder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_ClearTitleHolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "ClearTitleHolder", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventClearTitleHolder_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_ClearTitleHolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_ClearTitleHolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_ClearTitleHolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_ClearTitleHolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_ClearTitleHolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_ClearTitleHolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_DefendTitleHolder_Statics
	{
		struct ELTitleUtilityFunction_eventDefendTitleHolder_Parms
		{
			EELBelt TargetBelt;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetBelt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetBelt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_DefendTitleHolder_Statics::NewProp_TargetBelt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_DefendTitleHolder_Statics::NewProp_TargetBelt = { "TargetBelt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventDefendTitleHolder_Parms, TargetBelt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_DefendTitleHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_DefendTitleHolder_Statics::NewProp_TargetBelt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_DefendTitleHolder_Statics::NewProp_TargetBelt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_DefendTitleHolder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_DefendTitleHolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "DefendTitleHolder", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventDefendTitleHolder_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_DefendTitleHolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_DefendTitleHolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_DefendTitleHolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_DefendTitleHolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_DefendTitleHolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_DefendTitleHolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_DeleteTeam_Statics
	{
		struct ELTitleUtilityFunction_eventDeleteTeam_Parms
		{
			FGuid TeamUID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_DeleteTeam_Statics::NewProp_TeamUID = { "TeamUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventDeleteTeam_Parms, TeamUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_DeleteTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_DeleteTeam_Statics::NewProp_TeamUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_DeleteTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_DeleteTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "DeleteTeam", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventDeleteTeam_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_DeleteTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_DeleteTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_DeleteTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_DeleteTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_DeleteTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_DeleteTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_ExecuteFailSafeTitleHolder_Statics
	{
		struct ELTitleUtilityFunction_eventExecuteFailSafeTitleHolder_Parms
		{
			UObject* _pWorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_ExecuteFailSafeTitleHolder_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventExecuteFailSafeTitleHolder_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_ExecuteFailSafeTitleHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_ExecuteFailSafeTitleHolder_Statics::NewProp__pWorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_ExecuteFailSafeTitleHolder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_ExecuteFailSafeTitleHolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "ExecuteFailSafeTitleHolder", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventExecuteFailSafeTitleHolder_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_ExecuteFailSafeTitleHolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_ExecuteFailSafeTitleHolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_ExecuteFailSafeTitleHolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_ExecuteFailSafeTitleHolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_ExecuteFailSafeTitleHolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_ExecuteFailSafeTitleHolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics
	{
		struct ELTitleUtilityFunction_eventGetBeltParam_Parms
		{
			FELBeltParam BeltParam;
			EELBelt Belt;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeltParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Belt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Belt;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::NewProp_BeltParam = { "BeltParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetBeltParam_Parms, BeltParam), Z_Construct_UScriptStruct_FELBeltParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::NewProp_Belt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::NewProp_Belt = { "Belt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetBeltParam_Parms, Belt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventGetBeltParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventGetBeltParam_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::NewProp_BeltParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::NewProp_Belt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::NewProp_Belt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "GetBeltParam", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventGetBeltParam_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount_Statics
	{
		struct ELTitleUtilityFunction_eventGetDefendCount_Parms
		{
			EELBelt TargetBelt;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetBelt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetBelt;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount_Statics::NewProp_TargetBelt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount_Statics::NewProp_TargetBelt = { "TargetBelt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetDefendCount_Parms, TargetBelt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetDefendCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount_Statics::NewProp_TargetBelt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount_Statics::NewProp_TargetBelt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "GetDefendCount", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventGetDefendCount_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics
	{
		struct ELTitleUtilityFunction_eventGetDisplayTitleHolderText_Parms
		{
			UObject* _pWorldContextObject;
			EELBelt BeltType;
			EELDisplayBeltType DisplayBeltType;
			EGender Gender;
			bool ValidNewLine;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BeltType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BeltType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisplayBeltType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DisplayBeltType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static void NewProp_ValidNewLine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ValidNewLine;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetDisplayTitleHolderText_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_BeltType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_BeltType = { "BeltType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetDisplayTitleHolderText_Parms, BeltType), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_DisplayBeltType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_DisplayBeltType = { "DisplayBeltType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetDisplayTitleHolderText_Parms, DisplayBeltType), Z_Construct_UEnum_ABP_200508_EELDisplayBeltType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetDisplayTitleHolderText_Parms, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_ValidNewLine_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventGetDisplayTitleHolderText_Parms*)Obj)->ValidNewLine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_ValidNewLine = { "ValidNewLine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventGetDisplayTitleHolderText_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_ValidNewLine_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetDisplayTitleHolderText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_BeltType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_BeltType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_DisplayBeltType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_DisplayBeltType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_ValidNewLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "GetDisplayTitleHolderText", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventGetDisplayTitleHolderText_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList_Statics
	{
		struct ELTitleUtilityFunction_eventGetEnableBeltList_Parms
		{
			TArray<EELBelt> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetEnableBeltList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "GetEnableBeltList", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventGetEnableBeltList_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics
	{
		struct ELTitleUtilityFunction_eventGetHighestPriorityBelt_Parms
		{
			EWrestlerID_N WrestlerID;
			FGuid UID;
			bool PrioritizeTagBelt;
			EELBelt ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static void NewProp_PrioritizeTagBelt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PrioritizeTagBelt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetHighestPriorityBelt_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetHighestPriorityBelt_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::NewProp_PrioritizeTagBelt_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventGetHighestPriorityBelt_Parms*)Obj)->PrioritizeTagBelt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::NewProp_PrioritizeTagBelt = { "PrioritizeTagBelt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventGetHighestPriorityBelt_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::NewProp_PrioritizeTagBelt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetHighestPriorityBelt_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::NewProp_PrioritizeTagBelt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "GetHighestPriorityBelt", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventGetHighestPriorityBelt_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics
	{
		struct ELTitleUtilityFunction_eventGetTitleHolder_Parms
		{
			EELBelt Belt;
			TArray<FELTitleHolder> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Belt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Belt;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics::NewProp_Belt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics::NewProp_Belt = { "Belt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetTitleHolder_Parms, Belt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELTitleHolder, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetTitleHolder_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics::NewProp_Belt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics::NewProp_Belt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "GetTitleHolder", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventGetTitleHolder_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics
	{
		struct ELTitleUtilityFunction_eventGetTitleList_Parms
		{
			EWrestlerID_N WrestlerID;
			FGuid UID;
			TArray<EELBelt> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetTitleList_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetTitleList_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetTitleList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "GetTitleList", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventGetTitleList_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics
	{
		struct ELTitleUtilityFunction_eventGetWrestlerAttachedBelts_Parms
		{
			EWrestlerID_N WrestlerID;
			FGuid UID;
			bool PrioritizeTagBelt;
			TArray<EELBelt> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static void NewProp_PrioritizeTagBelt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PrioritizeTagBelt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetWrestlerAttachedBelts_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetWrestlerAttachedBelts_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::NewProp_PrioritizeTagBelt_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventGetWrestlerAttachedBelts_Parms*)Obj)->PrioritizeTagBelt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::NewProp_PrioritizeTagBelt = { "PrioritizeTagBelt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventGetWrestlerAttachedBelts_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::NewProp_PrioritizeTagBelt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventGetWrestlerAttachedBelts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::NewProp_PrioritizeTagBelt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "GetWrestlerAttachedBelts", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventGetWrestlerAttachedBelts_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics
	{
		struct ELTitleUtilityFunction_eventIsSameTitleHolderParam_Parms
		{
			FELTitleHolder _paramA;
			FELTitleHolder _paramB;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__paramA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__paramA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__paramB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__paramB;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::NewProp__paramA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::NewProp__paramA = { "_paramA", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventIsSameTitleHolderParam_Parms, _paramA), Z_Construct_UScriptStruct_FELTitleHolder, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::NewProp__paramA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::NewProp__paramA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::NewProp__paramB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::NewProp__paramB = { "_paramB", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventIsSameTitleHolderParam_Parms, _paramB), Z_Construct_UScriptStruct_FELTitleHolder, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::NewProp__paramB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::NewProp__paramB_MetaData)) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventIsSameTitleHolderParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventIsSameTitleHolderParam_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::NewProp__paramA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::NewProp__paramB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "IsSameTitleHolderParam", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventIsSameTitleHolderParam_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics
	{
		struct ELTitleUtilityFunction_eventIsValidBelt_Parms
		{
			EELBelt BeltType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BeltType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BeltType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics::NewProp_BeltType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics::NewProp_BeltType = { "BeltType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventIsValidBelt_Parms, BeltType), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventIsValidBelt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventIsValidBelt_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics::NewProp_BeltType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics::NewProp_BeltType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "IsValidBelt", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventIsValidBelt_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics
	{
		struct ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Parms
		{
			FELTitleWrestlerSelectParam WinnerWrestler;
			TArray<EELBelt> BeltList;
			TArray<EELBelt> DefendBeltList;
			TArray<FELTitleWrestlerSelectParam> WrestlerList;
			int32 WinnerTeamNo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WinnerWrestler;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BeltList_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BeltList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BeltList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefendBeltList_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefendBeltList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefendBeltList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WrestlerList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinnerTeamNo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_WinnerWrestler = { "WinnerWrestler", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Parms, WinnerWrestler), Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_BeltList_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_BeltList_Inner = { "BeltList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_BeltList = { "BeltList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Parms, BeltList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_DefendBeltList_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_DefendBeltList_Inner = { "DefendBeltList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_DefendBeltList = { "DefendBeltList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Parms, DefendBeltList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_WrestlerList_Inner = { "WrestlerList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_WrestlerList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_WrestlerList = { "WrestlerList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Parms, WrestlerList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_WrestlerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_WrestlerList_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_WinnerTeamNo = { "WinnerTeamNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Parms, WinnerTeamNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_WinnerWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_BeltList_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_BeltList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_BeltList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_DefendBeltList_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_DefendBeltList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_DefendBeltList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_WrestlerList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_WrestlerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_WinnerTeamNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "MakeBeltInfoForUpdateTitleHolder", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics
	{
		struct ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Tag_Parms
		{
			TArray<FELTitleWrestlerSelectParam> WinnerWrestlers;
			TArray<EELBelt> BeltList;
			TArray<FELTitleWrestlerSelectParam> WrestlerList;
			int32 WinnerTeamNo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WinnerWrestlers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WinnerWrestlers;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BeltList_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BeltList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BeltList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WrestlerList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinnerTeamNo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_WinnerWrestlers_Inner = { "WinnerWrestlers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_WinnerWrestlers = { "WinnerWrestlers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Tag_Parms, WinnerWrestlers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_BeltList_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_BeltList_Inner = { "BeltList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_BeltList = { "BeltList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Tag_Parms, BeltList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_WrestlerList_Inner = { "WrestlerList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_WrestlerList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_WrestlerList = { "WrestlerList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Tag_Parms, WrestlerList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_WrestlerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_WrestlerList_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_WinnerTeamNo = { "WinnerTeamNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Tag_Parms, WinnerTeamNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Tag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Tag_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_WinnerWrestlers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_WinnerWrestlers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_BeltList_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_BeltList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_BeltList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_WrestlerList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_WrestlerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_WinnerTeamNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "MakeBeltInfoForUpdateTitleHolder_Tag", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventMakeBeltInfoForUpdateTitleHolder_Tag_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics
	{
		struct ELTitleUtilityFunction_eventSetTitleHolder_Parms
		{
			EELBelt Belt;
			bool TagMember;
			EWrestlerID_N WrestlerID;
			FGuid UID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Belt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Belt;
		static void NewProp_TagMember_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TagMember;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_Belt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_Belt = { "Belt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventSetTitleHolder_Parms, Belt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_TagMember_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventSetTitleHolder_Parms*)Obj)->TagMember = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_TagMember = { "TagMember", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventSetTitleHolder_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_TagMember_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventSetTitleHolder_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventSetTitleHolder_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventSetTitleHolder_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventSetTitleHolder_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_Belt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_Belt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_TagMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "SetTitleHolder", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventSetTitleHolder_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics
	{
		struct ELTitleUtilityFunction_eventSetTitleHolder_Single_Parms
		{
			EELBelt Belt;
			EWrestlerID_N WrestlerID;
			FGuid UID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Belt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Belt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::NewProp_Belt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::NewProp_Belt = { "Belt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventSetTitleHolder_Single_Parms, Belt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventSetTitleHolder_Single_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventSetTitleHolder_Single_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventSetTitleHolder_Single_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventSetTitleHolder_Single_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::NewProp_Belt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::NewProp_Belt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "SetTitleHolder_Single", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventSetTitleHolder_Single_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics
	{
		struct ELTitleUtilityFunction_eventSetTitleHolder_Tag_Parms
		{
			EELBelt Belt;
			EWrestlerID_N WrestlerID_0;
			FGuid UID_0;
			EWrestlerID_N WrestlerID_1;
			FGuid UID_1;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Belt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Belt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_0_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID_0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID_0;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_1_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID_1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID_1;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_Belt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_Belt = { "Belt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventSetTitleHolder_Tag_Parms, Belt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_WrestlerID_0_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_WrestlerID_0 = { "WrestlerID_0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventSetTitleHolder_Tag_Parms, WrestlerID_0), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_UID_0 = { "UID_0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventSetTitleHolder_Tag_Parms, UID_0), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_WrestlerID_1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_WrestlerID_1 = { "WrestlerID_1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventSetTitleHolder_Tag_Parms, WrestlerID_1), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_UID_1 = { "UID_1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventSetTitleHolder_Tag_Parms, UID_1), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventSetTitleHolder_Tag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventSetTitleHolder_Tag_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_Belt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_Belt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_WrestlerID_0_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_WrestlerID_0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_UID_0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_WrestlerID_1_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_WrestlerID_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_UID_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "SetTitleHolder_Tag", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventSetTitleHolder_Tag_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics
	{
		struct ELTitleUtilityFunction_eventSetTitleHolderAtEditWrestler_Parms
		{
			EELBelt Belt;
			bool TagMember;
			FEditPersonParam EditPersonParam;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Belt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Belt;
		static void NewProp_TagMember_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TagMember;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditPersonParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::NewProp_Belt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::NewProp_Belt = { "Belt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventSetTitleHolderAtEditWrestler_Parms, Belt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::NewProp_TagMember_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventSetTitleHolderAtEditWrestler_Parms*)Obj)->TagMember = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::NewProp_TagMember = { "TagMember", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventSetTitleHolderAtEditWrestler_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::NewProp_TagMember_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::NewProp_EditPersonParam = { "EditPersonParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventSetTitleHolderAtEditWrestler_Parms, EditPersonParam), Z_Construct_UScriptStruct_FEditPersonParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventSetTitleHolderAtEditWrestler_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventSetTitleHolderAtEditWrestler_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::NewProp_Belt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::NewProp_Belt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::NewProp_TagMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::NewProp_EditPersonParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "SetTitleHolderAtEditWrestler", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventSetTitleHolderAtEditWrestler_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics
	{
		struct ELTitleUtilityFunction_eventSortByPriority_Parms
		{
			TArray<EELBelt> Out;
			TArray<EELBelt> In;
			bool PrioritizeTagBelt;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Out_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Out_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_In_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_In_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_In;
		static void NewProp_PrioritizeTagBelt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PrioritizeTagBelt;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_Out_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_Out_Inner = { "Out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventSortByPriority_Parms, Out), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_In_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_In_Inner = { "In", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTitleUtilityFunction_eventSortByPriority_Parms, In), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_In_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_In_MetaData)) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_PrioritizeTagBelt_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventSortByPriority_Parms*)Obj)->PrioritizeTagBelt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_PrioritizeTagBelt = { "PrioritizeTagBelt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventSortByPriority_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_PrioritizeTagBelt_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTitleUtilityFunction_eventSortByPriority_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTitleUtilityFunction_eventSortByPriority_Parms), &Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_Out_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_Out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_In_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_In_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_In,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_PrioritizeTagBelt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTitleUtilityFunction, nullptr, "SortByPriority", nullptr, nullptr, sizeof(ELTitleUtilityFunction_eventSortByPriority_Parms), Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELTitleUtilityFunction_NoRegister()
	{
		return UELTitleUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELTitleUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELTitleUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELTitleUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_BreakupTeam, "BreakupTeam" }, // 1084619505
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitle, "CanChallengedTheTitle" }, // 3612164761
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_CanChallengedTheTitleAtEditWrestler, "CanChallengedTheTitleAtEditWrestler" }, // 3714411331
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_CheckChangedMyWrestlerEditParam, "CheckChangedMyWrestlerEditParam" }, // 3734647387
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_ClearTitleHolder, "ClearTitleHolder" }, // 812131033
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_DefendTitleHolder, "DefendTitleHolder" }, // 2587030455
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_DeleteTeam, "DeleteTeam" }, // 2654145174
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_ExecuteFailSafeTitleHolder, "ExecuteFailSafeTitleHolder" }, // 660582052
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_GetBeltParam, "GetBeltParam" }, // 2392583071
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_GetDefendCount, "GetDefendCount" }, // 2079930845
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_GetDisplayTitleHolderText, "GetDisplayTitleHolderText" }, // 737666627
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_GetEnableBeltList, "GetEnableBeltList" }, // 33687853
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_GetHighestPriorityBelt, "GetHighestPriorityBelt" }, // 810331581
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleHolder, "GetTitleHolder" }, // 3212604288
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_GetTitleList, "GetTitleList" }, // 2220521297
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_GetWrestlerAttachedBelts, "GetWrestlerAttachedBelts" }, // 246689436
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_IsSameTitleHolderParam, "IsSameTitleHolderParam" }, // 3468817166
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_IsValidBelt, "IsValidBelt" }, // 1931082691
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder, "MakeBeltInfoForUpdateTitleHolder" }, // 3609628184
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_MakeBeltInfoForUpdateTitleHolder_Tag, "MakeBeltInfoForUpdateTitleHolder_Tag" }, // 1514891497
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder, "SetTitleHolder" }, // 611821763
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Single, "SetTitleHolder_Single" }, // 3459575241
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolder_Tag, "SetTitleHolder_Tag" }, // 4259913192
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_SetTitleHolderAtEditWrestler, "SetTitleHolderAtEditWrestler" }, // 661311483
		{ &Z_Construct_UFunction_UELTitleUtilityFunction_SortByPriority, "SortByPriority" }, // 3546194210
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTitleUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELTitleUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELTitleUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELTitleUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELTitleUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELTitleUtilityFunction_Statics::ClassParams = {
		&UELTitleUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELTitleUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELTitleUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELTitleUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELTitleUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELTitleUtilityFunction, 450617944);
	template<> ABP_200508_API UClass* StaticClass<UELTitleUtilityFunction>()
	{
		return UELTitleUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELTitleUtilityFunction(Z_Construct_UClass_UELTitleUtilityFunction, &UELTitleUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELTitleUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELTitleUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

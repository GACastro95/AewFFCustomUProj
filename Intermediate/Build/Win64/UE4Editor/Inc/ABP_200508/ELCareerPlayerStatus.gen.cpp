// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerPlayerStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerPlayerStatus() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerPlayerStatus_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerPlayerStatus();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerPlayerStatus::execGetCareerMoney)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCareerMoney();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerPlayerStatus::execGetEnergy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetEnergy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerPlayerStatus::execGetEnergyRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEnergyRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerPlayerStatus::execGetMotivation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMotivation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerPlayerStatus::execGetPPVLogoIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPPVLogoIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerPlayerStatus::execGetSkillPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkillPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerPlayerStatus::execGetTextMotivation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTextMotivation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerPlayerStatus::execGetTextRoadToPPV)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTextRoadToPPV();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerPlayerStatus::execGetTextWeek)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTextWeek();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerPlayerStatus::execIsInjury)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInjury();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerPlayerStatus::execUpdateParameter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateParameter(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	static FName NAME_UELCareerPlayerStatus_EventInAnimation = FName(TEXT("EventInAnimation"));
	void UELCareerPlayerStatus::EventInAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerPlayerStatus_EventInAnimation),NULL);
	}
	static FName NAME_UELCareerPlayerStatus_EventOutAnimation = FName(TEXT("EventOutAnimation"));
	void UELCareerPlayerStatus::EventOutAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerPlayerStatus_EventOutAnimation),NULL);
	}
	static FName NAME_UELCareerPlayerStatus_UpdateCareerMoney = FName(TEXT("UpdateCareerMoney"));
	void UELCareerPlayerStatus::UpdateCareerMoney()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerPlayerStatus_UpdateCareerMoney),NULL);
	}
	static FName NAME_UELCareerPlayerStatus_UpdateDisplay = FName(TEXT("UpdateDisplay"));
	void UELCareerPlayerStatus::UpdateDisplay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerPlayerStatus_UpdateDisplay),NULL);
	}
	static FName NAME_UELCareerPlayerStatus_UpdateEnergy = FName(TEXT("UpdateEnergy"));
	void UELCareerPlayerStatus::UpdateEnergy()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerPlayerStatus_UpdateEnergy),NULL);
	}
	static FName NAME_UELCareerPlayerStatus_UpdateFinisherBuff = FName(TEXT("UpdateFinisherBuff"));
	void UELCareerPlayerStatus::UpdateFinisherBuff(bool bFlag)
	{
		ELCareerPlayerStatus_eventUpdateFinisherBuff_Parms Parms;
		Parms.bFlag=bFlag ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerPlayerStatus_UpdateFinisherBuff),&Parms);
	}
	static FName NAME_UELCareerPlayerStatus_UpdateInjury = FName(TEXT("UpdateInjury"));
	void UELCareerPlayerStatus::UpdateInjury(bool Flag)
	{
		ELCareerPlayerStatus_eventUpdateInjury_Parms Parms;
		Parms.Flag=Flag ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerPlayerStatus_UpdateInjury),&Parms);
	}
	static FName NAME_UELCareerPlayerStatus_UpdateMomentumBuff = FName(TEXT("UpdateMomentumBuff"));
	void UELCareerPlayerStatus::UpdateMomentumBuff(bool bFlag)
	{
		ELCareerPlayerStatus_eventUpdateMomentumBuff_Parms Parms;
		Parms.bFlag=bFlag ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerPlayerStatus_UpdateMomentumBuff),&Parms);
	}
	static FName NAME_UELCareerPlayerStatus_UpdateMotivation = FName(TEXT("UpdateMotivation"));
	void UELCareerPlayerStatus::UpdateMotivation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerPlayerStatus_UpdateMotivation),NULL);
	}
	static FName NAME_UELCareerPlayerStatus_UpdateSkillPoint = FName(TEXT("UpdateSkillPoint"));
	void UELCareerPlayerStatus::UpdateSkillPoint()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerPlayerStatus_UpdateSkillPoint),NULL);
	}
	static FName NAME_UELCareerPlayerStatus_UpdateSkillPointBuff = FName(TEXT("UpdateSkillPointBuff"));
	void UELCareerPlayerStatus::UpdateSkillPointBuff(bool bFlag)
	{
		ELCareerPlayerStatus_eventUpdateSkillPointBuff_Parms Parms;
		Parms.bFlag=bFlag ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerPlayerStatus_UpdateSkillPointBuff),&Parms);
	}
	void UELCareerPlayerStatus::StaticRegisterNativesUELCareerPlayerStatus()
	{
		UClass* Class = UELCareerPlayerStatus::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCareerMoney", &UELCareerPlayerStatus::execGetCareerMoney },
			{ "GetEnergy", &UELCareerPlayerStatus::execGetEnergy },
			{ "GetEnergyRate", &UELCareerPlayerStatus::execGetEnergyRate },
			{ "GetMotivation", &UELCareerPlayerStatus::execGetMotivation },
			{ "GetPPVLogoIndex", &UELCareerPlayerStatus::execGetPPVLogoIndex },
			{ "GetSkillPoint", &UELCareerPlayerStatus::execGetSkillPoint },
			{ "GetTextMotivation", &UELCareerPlayerStatus::execGetTextMotivation },
			{ "GetTextRoadToPPV", &UELCareerPlayerStatus::execGetTextRoadToPPV },
			{ "GetTextWeek", &UELCareerPlayerStatus::execGetTextWeek },
			{ "IsInjury", &UELCareerPlayerStatus::execIsInjury },
			{ "UpdateParameter", &UELCareerPlayerStatus::execUpdateParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_EventInAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_EventInAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_EventInAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "EventInAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_EventInAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_EventInAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_EventInAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_EventInAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_EventOutAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_EventOutAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_EventOutAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "EventOutAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_EventOutAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_EventOutAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_EventOutAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_EventOutAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_GetCareerMoney_Statics
	{
		struct ELCareerPlayerStatus_eventGetCareerMoney_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerPlayerStatus_GetCareerMoney_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerPlayerStatus_eventGetCareerMoney_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPlayerStatus_GetCareerMoney_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPlayerStatus_GetCareerMoney_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_GetCareerMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_GetCareerMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "GetCareerMoney", nullptr, nullptr, sizeof(ELCareerPlayerStatus_eventGetCareerMoney_Parms), Z_Construct_UFunction_UELCareerPlayerStatus_GetCareerMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetCareerMoney_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_GetCareerMoney_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetCareerMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_GetCareerMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_GetCareerMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergy_Statics
	{
		struct ELCareerPlayerStatus_eventGetEnergy_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerPlayerStatus_eventGetEnergy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "GetEnergy", nullptr, nullptr, sizeof(ELCareerPlayerStatus_eventGetEnergy_Parms), Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergyRate_Statics
	{
		struct ELCareerPlayerStatus_eventGetEnergyRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergyRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerPlayerStatus_eventGetEnergyRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergyRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergyRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergyRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergyRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "GetEnergyRate", nullptr, nullptr, sizeof(ELCareerPlayerStatus_eventGetEnergyRate_Parms), Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergyRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergyRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergyRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergyRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergyRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergyRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_GetMotivation_Statics
	{
		struct ELCareerPlayerStatus_eventGetMotivation_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerPlayerStatus_GetMotivation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerPlayerStatus_eventGetMotivation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPlayerStatus_GetMotivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPlayerStatus_GetMotivation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_GetMotivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_GetMotivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "GetMotivation", nullptr, nullptr, sizeof(ELCareerPlayerStatus_eventGetMotivation_Parms), Z_Construct_UFunction_UELCareerPlayerStatus_GetMotivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetMotivation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_GetMotivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetMotivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_GetMotivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_GetMotivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_GetPPVLogoIndex_Statics
	{
		struct ELCareerPlayerStatus_eventGetPPVLogoIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerPlayerStatus_GetPPVLogoIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerPlayerStatus_eventGetPPVLogoIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPlayerStatus_GetPPVLogoIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPlayerStatus_GetPPVLogoIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_GetPPVLogoIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_GetPPVLogoIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "GetPPVLogoIndex", nullptr, nullptr, sizeof(ELCareerPlayerStatus_eventGetPPVLogoIndex_Parms), Z_Construct_UFunction_UELCareerPlayerStatus_GetPPVLogoIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetPPVLogoIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_GetPPVLogoIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetPPVLogoIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_GetPPVLogoIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_GetPPVLogoIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_GetSkillPoint_Statics
	{
		struct ELCareerPlayerStatus_eventGetSkillPoint_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerPlayerStatus_GetSkillPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerPlayerStatus_eventGetSkillPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPlayerStatus_GetSkillPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPlayerStatus_GetSkillPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_GetSkillPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_GetSkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "GetSkillPoint", nullptr, nullptr, sizeof(ELCareerPlayerStatus_eventGetSkillPoint_Parms), Z_Construct_UFunction_UELCareerPlayerStatus_GetSkillPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetSkillPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_GetSkillPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetSkillPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_GetSkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_GetSkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_GetTextMotivation_Statics
	{
		struct ELCareerPlayerStatus_eventGetTextMotivation_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELCareerPlayerStatus_GetTextMotivation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerPlayerStatus_eventGetTextMotivation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPlayerStatus_GetTextMotivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPlayerStatus_GetTextMotivation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_GetTextMotivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_GetTextMotivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "GetTextMotivation", nullptr, nullptr, sizeof(ELCareerPlayerStatus_eventGetTextMotivation_Parms), Z_Construct_UFunction_UELCareerPlayerStatus_GetTextMotivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetTextMotivation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_GetTextMotivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetTextMotivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_GetTextMotivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_GetTextMotivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_GetTextRoadToPPV_Statics
	{
		struct ELCareerPlayerStatus_eventGetTextRoadToPPV_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELCareerPlayerStatus_GetTextRoadToPPV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerPlayerStatus_eventGetTextRoadToPPV_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPlayerStatus_GetTextRoadToPPV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPlayerStatus_GetTextRoadToPPV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_GetTextRoadToPPV_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_GetTextRoadToPPV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "GetTextRoadToPPV", nullptr, nullptr, sizeof(ELCareerPlayerStatus_eventGetTextRoadToPPV_Parms), Z_Construct_UFunction_UELCareerPlayerStatus_GetTextRoadToPPV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetTextRoadToPPV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_GetTextRoadToPPV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetTextRoadToPPV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_GetTextRoadToPPV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_GetTextRoadToPPV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_GetTextWeek_Statics
	{
		struct ELCareerPlayerStatus_eventGetTextWeek_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELCareerPlayerStatus_GetTextWeek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerPlayerStatus_eventGetTextWeek_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPlayerStatus_GetTextWeek_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPlayerStatus_GetTextWeek_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_GetTextWeek_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_GetTextWeek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "GetTextWeek", nullptr, nullptr, sizeof(ELCareerPlayerStatus_eventGetTextWeek_Parms), Z_Construct_UFunction_UELCareerPlayerStatus_GetTextWeek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetTextWeek_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_GetTextWeek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_GetTextWeek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_GetTextWeek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_GetTextWeek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_IsInjury_Statics
	{
		struct ELCareerPlayerStatus_eventIsInjury_Parms
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
	void Z_Construct_UFunction_UELCareerPlayerStatus_IsInjury_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerPlayerStatus_eventIsInjury_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerPlayerStatus_IsInjury_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerPlayerStatus_eventIsInjury_Parms), &Z_Construct_UFunction_UELCareerPlayerStatus_IsInjury_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPlayerStatus_IsInjury_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPlayerStatus_IsInjury_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_IsInjury_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_IsInjury_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "IsInjury", nullptr, nullptr, sizeof(ELCareerPlayerStatus_eventIsInjury_Parms), Z_Construct_UFunction_UELCareerPlayerStatus_IsInjury_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_IsInjury_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_IsInjury_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_IsInjury_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_IsInjury()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_IsInjury_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_UpdateCareerMoney_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_UpdateCareerMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_UpdateCareerMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "UpdateCareerMoney", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateCareerMoney_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateCareerMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_UpdateCareerMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_UpdateCareerMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_UpdateDisplay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_UpdateDisplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_UpdateDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "UpdateDisplay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_UpdateDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_UpdateDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_UpdateEnergy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_UpdateEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_UpdateEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "UpdateEnergy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_UpdateEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_UpdateEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_UpdateFinisherBuff_Statics
	{
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerPlayerStatus_UpdateFinisherBuff_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerPlayerStatus_eventUpdateFinisherBuff_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerPlayerStatus_UpdateFinisherBuff_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerPlayerStatus_eventUpdateFinisherBuff_Parms), &Z_Construct_UFunction_UELCareerPlayerStatus_UpdateFinisherBuff_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPlayerStatus_UpdateFinisherBuff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPlayerStatus_UpdateFinisherBuff_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_UpdateFinisherBuff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_UpdateFinisherBuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "UpdateFinisherBuff", nullptr, nullptr, sizeof(ELCareerPlayerStatus_eventUpdateFinisherBuff_Parms), Z_Construct_UFunction_UELCareerPlayerStatus_UpdateFinisherBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateFinisherBuff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateFinisherBuff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateFinisherBuff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_UpdateFinisherBuff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_UpdateFinisherBuff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_UpdateInjury_Statics
	{
		static void NewProp_Flag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerPlayerStatus_UpdateInjury_Statics::NewProp_Flag_SetBit(void* Obj)
	{
		((ELCareerPlayerStatus_eventUpdateInjury_Parms*)Obj)->Flag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerPlayerStatus_UpdateInjury_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerPlayerStatus_eventUpdateInjury_Parms), &Z_Construct_UFunction_UELCareerPlayerStatus_UpdateInjury_Statics::NewProp_Flag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPlayerStatus_UpdateInjury_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPlayerStatus_UpdateInjury_Statics::NewProp_Flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_UpdateInjury_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_UpdateInjury_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "UpdateInjury", nullptr, nullptr, sizeof(ELCareerPlayerStatus_eventUpdateInjury_Parms), Z_Construct_UFunction_UELCareerPlayerStatus_UpdateInjury_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateInjury_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateInjury_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateInjury_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_UpdateInjury()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_UpdateInjury_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMomentumBuff_Statics
	{
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMomentumBuff_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerPlayerStatus_eventUpdateMomentumBuff_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMomentumBuff_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerPlayerStatus_eventUpdateMomentumBuff_Parms), &Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMomentumBuff_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMomentumBuff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMomentumBuff_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMomentumBuff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMomentumBuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "UpdateMomentumBuff", nullptr, nullptr, sizeof(ELCareerPlayerStatus_eventUpdateMomentumBuff_Parms), Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMomentumBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMomentumBuff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMomentumBuff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMomentumBuff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMomentumBuff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMomentumBuff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMotivation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMotivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMotivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "UpdateMotivation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMotivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMotivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMotivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMotivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_UpdateParameter_Statics
	{
		struct ELCareerPlayerStatus_eventUpdateParameter_Parms
		{
			float InDeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCareerPlayerStatus_UpdateParameter_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerPlayerStatus_eventUpdateParameter_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPlayerStatus_UpdateParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPlayerStatus_UpdateParameter_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_UpdateParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_UpdateParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "UpdateParameter", nullptr, nullptr, sizeof(ELCareerPlayerStatus_eventUpdateParameter_Parms), Z_Construct_UFunction_UELCareerPlayerStatus_UpdateParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_UpdateParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_UpdateParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "UpdateSkillPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPointBuff_Statics
	{
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPointBuff_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerPlayerStatus_eventUpdateSkillPointBuff_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPointBuff_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerPlayerStatus_eventUpdateSkillPointBuff_Parms), &Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPointBuff_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPointBuff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPointBuff_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPointBuff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPointBuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPlayerStatus, nullptr, "UpdateSkillPointBuff", nullptr, nullptr, sizeof(ELCareerPlayerStatus_eventUpdateSkillPointBuff_Parms), Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPointBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPointBuff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPointBuff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPointBuff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPointBuff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPointBuff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerPlayerStatus_NoRegister()
	{
		return UELCareerPlayerStatus::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerPlayerStatus_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerPlayerStatus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerPlayerStatus_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_EventInAnimation, "EventInAnimation" }, // 3672059547
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_EventOutAnimation, "EventOutAnimation" }, // 469777385
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_GetCareerMoney, "GetCareerMoney" }, // 3380167928
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergy, "GetEnergy" }, // 247062529
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_GetEnergyRate, "GetEnergyRate" }, // 2664543837
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_GetMotivation, "GetMotivation" }, // 574547248
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_GetPPVLogoIndex, "GetPPVLogoIndex" }, // 2272757183
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_GetSkillPoint, "GetSkillPoint" }, // 1295766679
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_GetTextMotivation, "GetTextMotivation" }, // 689024906
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_GetTextRoadToPPV, "GetTextRoadToPPV" }, // 2955824737
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_GetTextWeek, "GetTextWeek" }, // 2453827758
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_IsInjury, "IsInjury" }, // 1021910324
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_UpdateCareerMoney, "UpdateCareerMoney" }, // 2535706888
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_UpdateDisplay, "UpdateDisplay" }, // 1617170990
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_UpdateEnergy, "UpdateEnergy" }, // 153839077
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_UpdateFinisherBuff, "UpdateFinisherBuff" }, // 534969655
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_UpdateInjury, "UpdateInjury" }, // 494626999
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMomentumBuff, "UpdateMomentumBuff" }, // 3162131813
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_UpdateMotivation, "UpdateMotivation" }, // 2532677598
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_UpdateParameter, "UpdateParameter" }, // 3346052358
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPoint, "UpdateSkillPoint" }, // 1883405168
		{ &Z_Construct_UFunction_UELCareerPlayerStatus_UpdateSkillPointBuff, "UpdateSkillPointBuff" }, // 410748305
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerPlayerStatus_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerPlayerStatus.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerPlayerStatus.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerPlayerStatus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerPlayerStatus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerPlayerStatus_Statics::ClassParams = {
		&UELCareerPlayerStatus::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerPlayerStatus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerPlayerStatus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerPlayerStatus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerPlayerStatus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerPlayerStatus, 99799819);
	template<> ABP_200508_API UClass* StaticClass<UELCareerPlayerStatus>()
	{
		return UELCareerPlayerStatus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerPlayerStatus(Z_Construct_UClass_UELCareerPlayerStatus, &UELCareerPlayerStatus::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerPlayerStatus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerPlayerStatus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

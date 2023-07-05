// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerStatusWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerStatusWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerStatusWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerStatusWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerStatusWidgetBase::execGetCareerMoneyNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCareerMoneyNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerStatusWidgetBase::execGetCondition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCondition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerStatusWidgetBase::execGetFollowersNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFollowersNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerStatusWidgetBase::execGetFollowersNumString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFollowersNumString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerStatusWidgetBase::execGetMotivation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMotivation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerStatusWidgetBase::execGetSkillPointNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkillPointNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerStatusWidgetBase::execGetToDynamiteSquareNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetToDynamiteSquareNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerStatusWidgetBase::execSetCareerMoneyNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerMoneyNum(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerStatusWidgetBase::execSetCondition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCondition(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerStatusWidgetBase::execSetFollowersNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFollowersNum(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerStatusWidgetBase::execSetMotivation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMotivation(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerStatusWidgetBase::execSetSkillPointNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkillPointNum(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerStatusWidgetBase::execSetToDynamiteSquareNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToDynamiteSquareNum(Z_Param__value);
		P_NATIVE_END;
	}
	static FName NAME_UELCareerStatusWidgetBase_ChainUpdateAllWidget = FName(TEXT("ChainUpdateAllWidget"));
	void UELCareerStatusWidgetBase::ChainUpdateAllWidget(bool _bAnimation)
	{
		ELCareerStatusWidgetBase_eventChainUpdateAllWidget_Parms Parms;
		Parms._bAnimation=_bAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerStatusWidgetBase_ChainUpdateAllWidget),&Parms);
	}
	static FName NAME_UELCareerStatusWidgetBase_UpdateAllWidget = FName(TEXT("UpdateAllWidget"));
	void UELCareerStatusWidgetBase::UpdateAllWidget(bool _bAnimation)
	{
		ELCareerStatusWidgetBase_eventUpdateAllWidget_Parms Parms;
		Parms._bAnimation=_bAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerStatusWidgetBase_UpdateAllWidget),&Parms);
	}
	static FName NAME_UELCareerStatusWidgetBase_UpdateCareerMoneyNum = FName(TEXT("UpdateCareerMoneyNum"));
	void UELCareerStatusWidgetBase::UpdateCareerMoneyNum(bool _bAnimation)
	{
		ELCareerStatusWidgetBase_eventUpdateCareerMoneyNum_Parms Parms;
		Parms._bAnimation=_bAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerStatusWidgetBase_UpdateCareerMoneyNum),&Parms);
	}
	static FName NAME_UELCareerStatusWidgetBase_UpdateCondition = FName(TEXT("UpdateCondition"));
	void UELCareerStatusWidgetBase::UpdateCondition(bool _bAnimation)
	{
		ELCareerStatusWidgetBase_eventUpdateCondition_Parms Parms;
		Parms._bAnimation=_bAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerStatusWidgetBase_UpdateCondition),&Parms);
	}
	static FName NAME_UELCareerStatusWidgetBase_UpdateFollowersNum = FName(TEXT("UpdateFollowersNum"));
	void UELCareerStatusWidgetBase::UpdateFollowersNum(bool _bAnimation)
	{
		ELCareerStatusWidgetBase_eventUpdateFollowersNum_Parms Parms;
		Parms._bAnimation=_bAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerStatusWidgetBase_UpdateFollowersNum),&Parms);
	}
	static FName NAME_UELCareerStatusWidgetBase_UpdateMatchLogo = FName(TEXT("UpdateMatchLogo"));
	void UELCareerStatusWidgetBase::UpdateMatchLogo()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerStatusWidgetBase_UpdateMatchLogo),NULL);
	}
	static FName NAME_UELCareerStatusWidgetBase_UpdateMotivationLevel = FName(TEXT("UpdateMotivationLevel"));
	void UELCareerStatusWidgetBase::UpdateMotivationLevel(bool _bAnimation)
	{
		ELCareerStatusWidgetBase_eventUpdateMotivationLevel_Parms Parms;
		Parms._bAnimation=_bAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerStatusWidgetBase_UpdateMotivationLevel),&Parms);
	}
	static FName NAME_UELCareerStatusWidgetBase_UpdateSkillPointNum = FName(TEXT("UpdateSkillPointNum"));
	void UELCareerStatusWidgetBase::UpdateSkillPointNum(bool _bAnimation)
	{
		ELCareerStatusWidgetBase_eventUpdateSkillPointNum_Parms Parms;
		Parms._bAnimation=_bAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerStatusWidgetBase_UpdateSkillPointNum),&Parms);
	}
	static FName NAME_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum = FName(TEXT("UpdateToDynamiteSquareNum"));
	void UELCareerStatusWidgetBase::UpdateToDynamiteSquareNum(bool _bAnimation)
	{
		ELCareerStatusWidgetBase_eventUpdateToDynamiteSquareNum_Parms Parms;
		Parms._bAnimation=_bAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum),&Parms);
	}
	void UELCareerStatusWidgetBase::StaticRegisterNativesUELCareerStatusWidgetBase()
	{
		UClass* Class = UELCareerStatusWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCareerMoneyNum", &UELCareerStatusWidgetBase::execGetCareerMoneyNum },
			{ "GetCondition", &UELCareerStatusWidgetBase::execGetCondition },
			{ "GetFollowersNum", &UELCareerStatusWidgetBase::execGetFollowersNum },
			{ "GetFollowersNumString", &UELCareerStatusWidgetBase::execGetFollowersNumString },
			{ "GetMotivation", &UELCareerStatusWidgetBase::execGetMotivation },
			{ "GetSkillPointNum", &UELCareerStatusWidgetBase::execGetSkillPointNum },
			{ "GetToDynamiteSquareNum", &UELCareerStatusWidgetBase::execGetToDynamiteSquareNum },
			{ "SetCareerMoneyNum", &UELCareerStatusWidgetBase::execSetCareerMoneyNum },
			{ "SetCondition", &UELCareerStatusWidgetBase::execSetCondition },
			{ "SetFollowersNum", &UELCareerStatusWidgetBase::execSetFollowersNum },
			{ "SetMotivation", &UELCareerStatusWidgetBase::execSetMotivation },
			{ "SetSkillPointNum", &UELCareerStatusWidgetBase::execSetSkillPointNum },
			{ "SetToDynamiteSquareNum", &UELCareerStatusWidgetBase::execSetToDynamiteSquareNum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_ChainUpdateAllWidget_Statics
	{
		static void NewProp__bAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerStatusWidgetBase_ChainUpdateAllWidget_Statics::NewProp__bAnimation_SetBit(void* Obj)
	{
		((ELCareerStatusWidgetBase_eventChainUpdateAllWidget_Parms*)Obj)->_bAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_ChainUpdateAllWidget_Statics::NewProp__bAnimation = { "_bAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerStatusWidgetBase_eventChainUpdateAllWidget_Parms), &Z_Construct_UFunction_UELCareerStatusWidgetBase_ChainUpdateAllWidget_Statics::NewProp__bAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_ChainUpdateAllWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_ChainUpdateAllWidget_Statics::NewProp__bAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_ChainUpdateAllWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_ChainUpdateAllWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "ChainUpdateAllWidget", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventChainUpdateAllWidget_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_ChainUpdateAllWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_ChainUpdateAllWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_ChainUpdateAllWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_ChainUpdateAllWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_ChainUpdateAllWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_ChainUpdateAllWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCareerMoneyNum_Statics
	{
		struct ELCareerStatusWidgetBase_eventGetCareerMoneyNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCareerMoneyNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStatusWidgetBase_eventGetCareerMoneyNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCareerMoneyNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCareerMoneyNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCareerMoneyNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCareerMoneyNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "GetCareerMoneyNum", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventGetCareerMoneyNum_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCareerMoneyNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCareerMoneyNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCareerMoneyNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCareerMoneyNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCareerMoneyNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCareerMoneyNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCondition_Statics
	{
		struct ELCareerStatusWidgetBase_eventGetCondition_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStatusWidgetBase_eventGetCondition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "GetCondition", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventGetCondition_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNum_Statics
	{
		struct ELCareerStatusWidgetBase_eventGetFollowersNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStatusWidgetBase_eventGetFollowersNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "GetFollowersNum", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventGetFollowersNum_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNumString_Statics
	{
		struct ELCareerStatusWidgetBase_eventGetFollowersNumString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNumString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStatusWidgetBase_eventGetFollowersNumString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNumString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNumString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNumString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNumString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "GetFollowersNumString", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventGetFollowersNumString_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNumString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNumString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNumString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNumString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNumString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNumString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_GetMotivation_Statics
	{
		struct ELCareerStatusWidgetBase_eventGetMotivation_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_GetMotivation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStatusWidgetBase_eventGetMotivation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_GetMotivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_GetMotivation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_GetMotivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_GetMotivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "GetMotivation", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventGetMotivation_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_GetMotivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetMotivation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetMotivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetMotivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_GetMotivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_GetMotivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_GetSkillPointNum_Statics
	{
		struct ELCareerStatusWidgetBase_eventGetSkillPointNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_GetSkillPointNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStatusWidgetBase_eventGetSkillPointNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_GetSkillPointNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_GetSkillPointNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_GetSkillPointNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_GetSkillPointNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "GetSkillPointNum", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventGetSkillPointNum_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_GetSkillPointNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetSkillPointNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetSkillPointNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetSkillPointNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_GetSkillPointNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_GetSkillPointNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_GetToDynamiteSquareNum_Statics
	{
		struct ELCareerStatusWidgetBase_eventGetToDynamiteSquareNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_GetToDynamiteSquareNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStatusWidgetBase_eventGetToDynamiteSquareNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_GetToDynamiteSquareNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_GetToDynamiteSquareNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_GetToDynamiteSquareNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_GetToDynamiteSquareNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "GetToDynamiteSquareNum", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventGetToDynamiteSquareNum_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_GetToDynamiteSquareNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetToDynamiteSquareNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetToDynamiteSquareNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_GetToDynamiteSquareNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_GetToDynamiteSquareNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_GetToDynamiteSquareNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCareerMoneyNum_Statics
	{
		struct ELCareerStatusWidgetBase_eventSetCareerMoneyNum_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCareerMoneyNum_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStatusWidgetBase_eventSetCareerMoneyNum_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCareerMoneyNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCareerMoneyNum_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCareerMoneyNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCareerMoneyNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "SetCareerMoneyNum", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventSetCareerMoneyNum_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCareerMoneyNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCareerMoneyNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCareerMoneyNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCareerMoneyNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCareerMoneyNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCareerMoneyNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCondition_Statics
	{
		struct ELCareerStatusWidgetBase_eventSetCondition_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCondition_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStatusWidgetBase_eventSetCondition_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCondition_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "SetCondition", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventSetCondition_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_SetFollowersNum_Statics
	{
		struct ELCareerStatusWidgetBase_eventSetFollowersNum_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_SetFollowersNum_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStatusWidgetBase_eventSetFollowersNum_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_SetFollowersNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_SetFollowersNum_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_SetFollowersNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_SetFollowersNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "SetFollowersNum", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventSetFollowersNum_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_SetFollowersNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetFollowersNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetFollowersNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetFollowersNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_SetFollowersNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_SetFollowersNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_SetMotivation_Statics
	{
		struct ELCareerStatusWidgetBase_eventSetMotivation_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_SetMotivation_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStatusWidgetBase_eventSetMotivation_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_SetMotivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_SetMotivation_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_SetMotivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_SetMotivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "SetMotivation", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventSetMotivation_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_SetMotivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetMotivation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetMotivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetMotivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_SetMotivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_SetMotivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_SetSkillPointNum_Statics
	{
		struct ELCareerStatusWidgetBase_eventSetSkillPointNum_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_SetSkillPointNum_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStatusWidgetBase_eventSetSkillPointNum_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_SetSkillPointNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_SetSkillPointNum_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_SetSkillPointNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_SetSkillPointNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "SetSkillPointNum", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventSetSkillPointNum_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_SetSkillPointNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetSkillPointNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetSkillPointNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetSkillPointNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_SetSkillPointNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_SetSkillPointNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_SetToDynamiteSquareNum_Statics
	{
		struct ELCareerStatusWidgetBase_eventSetToDynamiteSquareNum_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_SetToDynamiteSquareNum_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStatusWidgetBase_eventSetToDynamiteSquareNum_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_SetToDynamiteSquareNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_SetToDynamiteSquareNum_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_SetToDynamiteSquareNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_SetToDynamiteSquareNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "SetToDynamiteSquareNum", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventSetToDynamiteSquareNum_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_SetToDynamiteSquareNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetToDynamiteSquareNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetToDynamiteSquareNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_SetToDynamiteSquareNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_SetToDynamiteSquareNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_SetToDynamiteSquareNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateAllWidget_Statics
	{
		static void NewProp__bAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateAllWidget_Statics::NewProp__bAnimation_SetBit(void* Obj)
	{
		((ELCareerStatusWidgetBase_eventUpdateAllWidget_Parms*)Obj)->_bAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateAllWidget_Statics::NewProp__bAnimation = { "_bAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerStatusWidgetBase_eventUpdateAllWidget_Parms), &Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateAllWidget_Statics::NewProp__bAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateAllWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateAllWidget_Statics::NewProp__bAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateAllWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateAllWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "UpdateAllWidget", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventUpdateAllWidget_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateAllWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateAllWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateAllWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateAllWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateAllWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateAllWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCareerMoneyNum_Statics
	{
		static void NewProp__bAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCareerMoneyNum_Statics::NewProp__bAnimation_SetBit(void* Obj)
	{
		((ELCareerStatusWidgetBase_eventUpdateCareerMoneyNum_Parms*)Obj)->_bAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCareerMoneyNum_Statics::NewProp__bAnimation = { "_bAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerStatusWidgetBase_eventUpdateCareerMoneyNum_Parms), &Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCareerMoneyNum_Statics::NewProp__bAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCareerMoneyNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCareerMoneyNum_Statics::NewProp__bAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCareerMoneyNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCareerMoneyNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "UpdateCareerMoneyNum", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventUpdateCareerMoneyNum_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCareerMoneyNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCareerMoneyNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCareerMoneyNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCareerMoneyNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCareerMoneyNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCareerMoneyNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCondition_Statics
	{
		static void NewProp__bAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCondition_Statics::NewProp__bAnimation_SetBit(void* Obj)
	{
		((ELCareerStatusWidgetBase_eventUpdateCondition_Parms*)Obj)->_bAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCondition_Statics::NewProp__bAnimation = { "_bAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerStatusWidgetBase_eventUpdateCondition_Parms), &Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCondition_Statics::NewProp__bAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCondition_Statics::NewProp__bAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "UpdateCondition", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventUpdateCondition_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateFollowersNum_Statics
	{
		static void NewProp__bAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateFollowersNum_Statics::NewProp__bAnimation_SetBit(void* Obj)
	{
		((ELCareerStatusWidgetBase_eventUpdateFollowersNum_Parms*)Obj)->_bAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateFollowersNum_Statics::NewProp__bAnimation = { "_bAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerStatusWidgetBase_eventUpdateFollowersNum_Parms), &Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateFollowersNum_Statics::NewProp__bAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateFollowersNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateFollowersNum_Statics::NewProp__bAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateFollowersNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateFollowersNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "UpdateFollowersNum", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventUpdateFollowersNum_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateFollowersNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateFollowersNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateFollowersNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateFollowersNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateFollowersNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateFollowersNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMatchLogo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMatchLogo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMatchLogo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "UpdateMatchLogo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMatchLogo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMatchLogo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMatchLogo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMatchLogo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMotivationLevel_Statics
	{
		static void NewProp__bAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMotivationLevel_Statics::NewProp__bAnimation_SetBit(void* Obj)
	{
		((ELCareerStatusWidgetBase_eventUpdateMotivationLevel_Parms*)Obj)->_bAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMotivationLevel_Statics::NewProp__bAnimation = { "_bAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerStatusWidgetBase_eventUpdateMotivationLevel_Parms), &Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMotivationLevel_Statics::NewProp__bAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMotivationLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMotivationLevel_Statics::NewProp__bAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMotivationLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMotivationLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "UpdateMotivationLevel", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventUpdateMotivationLevel_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMotivationLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMotivationLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMotivationLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMotivationLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMotivationLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMotivationLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateSkillPointNum_Statics
	{
		static void NewProp__bAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateSkillPointNum_Statics::NewProp__bAnimation_SetBit(void* Obj)
	{
		((ELCareerStatusWidgetBase_eventUpdateSkillPointNum_Parms*)Obj)->_bAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateSkillPointNum_Statics::NewProp__bAnimation = { "_bAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerStatusWidgetBase_eventUpdateSkillPointNum_Parms), &Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateSkillPointNum_Statics::NewProp__bAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateSkillPointNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateSkillPointNum_Statics::NewProp__bAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateSkillPointNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateSkillPointNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "UpdateSkillPointNum", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventUpdateSkillPointNum_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateSkillPointNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateSkillPointNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateSkillPointNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateSkillPointNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateSkillPointNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateSkillPointNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum_Statics
	{
		static void NewProp__bAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum_Statics::NewProp__bAnimation_SetBit(void* Obj)
	{
		((ELCareerStatusWidgetBase_eventUpdateToDynamiteSquareNum_Parms*)Obj)->_bAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum_Statics::NewProp__bAnimation = { "_bAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerStatusWidgetBase_eventUpdateToDynamiteSquareNum_Parms), &Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum_Statics::NewProp__bAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum_Statics::NewProp__bAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerStatusWidgetBase, nullptr, "UpdateToDynamiteSquareNum", nullptr, nullptr, sizeof(ELCareerStatusWidgetBase_eventUpdateToDynamiteSquareNum_Parms), Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerStatusWidgetBase_NoRegister()
	{
		return UELCareerStatusWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerStatusWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerStatusWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerStatusWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_ChainUpdateAllWidget, "ChainUpdateAllWidget" }, // 3603114128
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCareerMoneyNum, "GetCareerMoneyNum" }, // 191417139
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_GetCondition, "GetCondition" }, // 4191123573
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNum, "GetFollowersNum" }, // 2670002690
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_GetFollowersNumString, "GetFollowersNumString" }, // 2718985805
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_GetMotivation, "GetMotivation" }, // 2175046033
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_GetSkillPointNum, "GetSkillPointNum" }, // 289569394
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_GetToDynamiteSquareNum, "GetToDynamiteSquareNum" }, // 3526166539
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCareerMoneyNum, "SetCareerMoneyNum" }, // 2234888486
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_SetCondition, "SetCondition" }, // 2797731099
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_SetFollowersNum, "SetFollowersNum" }, // 583283522
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_SetMotivation, "SetMotivation" }, // 3277762288
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_SetSkillPointNum, "SetSkillPointNum" }, // 546955050
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_SetToDynamiteSquareNum, "SetToDynamiteSquareNum" }, // 2812333434
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateAllWidget, "UpdateAllWidget" }, // 966343667
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCareerMoneyNum, "UpdateCareerMoneyNum" }, // 2564974672
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateCondition, "UpdateCondition" }, // 2123038214
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateFollowersNum, "UpdateFollowersNum" }, // 2022927494
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMatchLogo, "UpdateMatchLogo" }, // 289562635
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateMotivationLevel, "UpdateMotivationLevel" }, // 465360325
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateSkillPointNum, "UpdateSkillPointNum" }, // 2168331080
		{ &Z_Construct_UFunction_UELCareerStatusWidgetBase_UpdateToDynamiteSquareNum, "UpdateToDynamiteSquareNum" }, // 2408340515
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerStatusWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerStatusWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerStatusWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerStatusWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerStatusWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerStatusWidgetBase_Statics::ClassParams = {
		&UELCareerStatusWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELCareerStatusWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerStatusWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerStatusWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerStatusWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerStatusWidgetBase, 460641786);
	template<> ABP_200508_API UClass* StaticClass<UELCareerStatusWidgetBase>()
	{
		return UELCareerStatusWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerStatusWidgetBase(Z_Construct_UClass_UELCareerStatusWidgetBase, &UELCareerStatusWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerStatusWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerStatusWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

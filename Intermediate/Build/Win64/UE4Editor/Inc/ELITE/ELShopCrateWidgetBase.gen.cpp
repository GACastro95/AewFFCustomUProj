// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELShopCrateWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELShopCrateWidgetBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELShopCrateWidgetBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELShopCrateWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMainMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	DEFINE_FUNCTION(UELShopCrateWidgetBase::execChangePlayLevelSequence)
	{
		P_GET_UBOOL(Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangePlayLevelSequence(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopCrateWidgetBase::execIsPlayLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayLevelSequence();
		P_NATIVE_END;
	}
	static FName NAME_UELShopCrateWidgetBase_OnCancelItem = FName(TEXT("OnCancelItem"));
	void UELShopCrateWidgetBase::OnCancelItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELShopCrateWidgetBase_OnCancelItem),NULL);
	}
	static FName NAME_UELShopCrateWidgetBase_OnChangeCategory = FName(TEXT("OnChangeCategory"));
	void UELShopCrateWidgetBase::OnChangeCategory(int32 _addIndex)
	{
		ELShopCrateWidgetBase_eventOnChangeCategory_Parms Parms;
		Parms._addIndex=_addIndex;
		ProcessEvent(FindFunctionChecked(NAME_UELShopCrateWidgetBase_OnChangeCategory),&Parms);
	}
	static FName NAME_UELShopCrateWidgetBase_OnDecideItem = FName(TEXT("OnDecideItem"));
	void UELShopCrateWidgetBase::OnDecideItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELShopCrateWidgetBase_OnDecideItem),NULL);
	}
	static FName NAME_UELShopCrateWidgetBase_OnMoveUpDownCursor = FName(TEXT("OnMoveUpDownCursor"));
	void UELShopCrateWidgetBase::OnMoveUpDownCursor()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELShopCrateWidgetBase_OnMoveUpDownCursor),NULL);
	}
	static FName NAME_UELShopCrateWidgetBase_OnPlayLevelSequence = FName(TEXT("OnPlayLevelSequence"));
	void UELShopCrateWidgetBase::OnPlayLevelSequence()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELShopCrateWidgetBase_OnPlayLevelSequence),NULL);
	}
	static FName NAME_UELShopCrateWidgetBase_OnPressedMoveTab = FName(TEXT("OnPressedMoveTab"));
	void UELShopCrateWidgetBase::OnPressedMoveTab(bool _isLeft)
	{
		ELShopCrateWidgetBase_eventOnPressedMoveTab_Parms Parms;
		Parms._isLeft=_isLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELShopCrateWidgetBase_OnPressedMoveTab),&Parms);
	}
	static FName NAME_UELShopCrateWidgetBase_OnStopLevelSequence = FName(TEXT("OnStopLevelSequence"));
	void UELShopCrateWidgetBase::OnStopLevelSequence()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELShopCrateWidgetBase_OnStopLevelSequence),NULL);
	}
	void UELShopCrateWidgetBase::StaticRegisterNativesUELShopCrateWidgetBase()
	{
		UClass* Class = UELShopCrateWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangePlayLevelSequence", &UELShopCrateWidgetBase::execChangePlayLevelSequence },
			{ "IsPlayLevelSequence", &UELShopCrateWidgetBase::execIsPlayLevelSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELShopCrateWidgetBase_ChangePlayLevelSequence_Statics
	{
		struct ELShopCrateWidgetBase_eventChangePlayLevelSequence_Parms
		{
			bool State;
		};
		static void NewProp_State_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELShopCrateWidgetBase_ChangePlayLevelSequence_Statics::NewProp_State_SetBit(void* Obj)
	{
		((ELShopCrateWidgetBase_eventChangePlayLevelSequence_Parms*)Obj)->State = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELShopCrateWidgetBase_ChangePlayLevelSequence_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELShopCrateWidgetBase_eventChangePlayLevelSequence_Parms), &Z_Construct_UFunction_UELShopCrateWidgetBase_ChangePlayLevelSequence_Statics::NewProp_State_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopCrateWidgetBase_ChangePlayLevelSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopCrateWidgetBase_ChangePlayLevelSequence_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopCrateWidgetBase_ChangePlayLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopCrateWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopCrateWidgetBase_ChangePlayLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopCrateWidgetBase, nullptr, "ChangePlayLevelSequence", nullptr, nullptr, sizeof(ELShopCrateWidgetBase_eventChangePlayLevelSequence_Parms), Z_Construct_UFunction_UELShopCrateWidgetBase_ChangePlayLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopCrateWidgetBase_ChangePlayLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopCrateWidgetBase_ChangePlayLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopCrateWidgetBase_ChangePlayLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopCrateWidgetBase_ChangePlayLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopCrateWidgetBase_ChangePlayLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopCrateWidgetBase_IsPlayLevelSequence_Statics
	{
		struct ELShopCrateWidgetBase_eventIsPlayLevelSequence_Parms
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
	void Z_Construct_UFunction_UELShopCrateWidgetBase_IsPlayLevelSequence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELShopCrateWidgetBase_eventIsPlayLevelSequence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELShopCrateWidgetBase_IsPlayLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELShopCrateWidgetBase_eventIsPlayLevelSequence_Parms), &Z_Construct_UFunction_UELShopCrateWidgetBase_IsPlayLevelSequence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopCrateWidgetBase_IsPlayLevelSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopCrateWidgetBase_IsPlayLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopCrateWidgetBase_IsPlayLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopCrateWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopCrateWidgetBase_IsPlayLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopCrateWidgetBase, nullptr, "IsPlayLevelSequence", nullptr, nullptr, sizeof(ELShopCrateWidgetBase_eventIsPlayLevelSequence_Parms), Z_Construct_UFunction_UELShopCrateWidgetBase_IsPlayLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopCrateWidgetBase_IsPlayLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopCrateWidgetBase_IsPlayLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopCrateWidgetBase_IsPlayLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopCrateWidgetBase_IsPlayLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopCrateWidgetBase_IsPlayLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopCrateWidgetBase_OnCancelItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopCrateWidgetBase_OnCancelItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopCrateWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopCrateWidgetBase_OnCancelItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopCrateWidgetBase, nullptr, "OnCancelItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopCrateWidgetBase_OnCancelItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopCrateWidgetBase_OnCancelItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopCrateWidgetBase_OnCancelItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopCrateWidgetBase_OnCancelItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopCrateWidgetBase_OnChangeCategory_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__addIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopCrateWidgetBase_OnChangeCategory_Statics::NewProp__addIndex = { "_addIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopCrateWidgetBase_eventOnChangeCategory_Parms, _addIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopCrateWidgetBase_OnChangeCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopCrateWidgetBase_OnChangeCategory_Statics::NewProp__addIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopCrateWidgetBase_OnChangeCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopCrateWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopCrateWidgetBase_OnChangeCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopCrateWidgetBase, nullptr, "OnChangeCategory", nullptr, nullptr, sizeof(ELShopCrateWidgetBase_eventOnChangeCategory_Parms), Z_Construct_UFunction_UELShopCrateWidgetBase_OnChangeCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopCrateWidgetBase_OnChangeCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopCrateWidgetBase_OnChangeCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopCrateWidgetBase_OnChangeCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopCrateWidgetBase_OnChangeCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopCrateWidgetBase_OnChangeCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopCrateWidgetBase_OnDecideItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopCrateWidgetBase_OnDecideItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopCrateWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopCrateWidgetBase_OnDecideItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopCrateWidgetBase, nullptr, "OnDecideItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopCrateWidgetBase_OnDecideItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopCrateWidgetBase_OnDecideItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopCrateWidgetBase_OnDecideItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopCrateWidgetBase_OnDecideItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopCrateWidgetBase_OnMoveUpDownCursor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopCrateWidgetBase_OnMoveUpDownCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopCrateWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopCrateWidgetBase_OnMoveUpDownCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopCrateWidgetBase, nullptr, "OnMoveUpDownCursor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopCrateWidgetBase_OnMoveUpDownCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopCrateWidgetBase_OnMoveUpDownCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopCrateWidgetBase_OnMoveUpDownCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopCrateWidgetBase_OnMoveUpDownCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopCrateWidgetBase_OnPlayLevelSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopCrateWidgetBase_OnPlayLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopCrateWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopCrateWidgetBase_OnPlayLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopCrateWidgetBase, nullptr, "OnPlayLevelSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopCrateWidgetBase_OnPlayLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopCrateWidgetBase_OnPlayLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopCrateWidgetBase_OnPlayLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopCrateWidgetBase_OnPlayLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopCrateWidgetBase_OnPressedMoveTab_Statics
	{
		static void NewProp__isLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELShopCrateWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit(void* Obj)
	{
		((ELShopCrateWidgetBase_eventOnPressedMoveTab_Parms*)Obj)->_isLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELShopCrateWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft = { "_isLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELShopCrateWidgetBase_eventOnPressedMoveTab_Parms), &Z_Construct_UFunction_UELShopCrateWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopCrateWidgetBase_OnPressedMoveTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopCrateWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopCrateWidgetBase_OnPressedMoveTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopCrateWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopCrateWidgetBase_OnPressedMoveTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopCrateWidgetBase, nullptr, "OnPressedMoveTab", nullptr, nullptr, sizeof(ELShopCrateWidgetBase_eventOnPressedMoveTab_Parms), Z_Construct_UFunction_UELShopCrateWidgetBase_OnPressedMoveTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopCrateWidgetBase_OnPressedMoveTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopCrateWidgetBase_OnPressedMoveTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopCrateWidgetBase_OnPressedMoveTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopCrateWidgetBase_OnPressedMoveTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopCrateWidgetBase_OnPressedMoveTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopCrateWidgetBase_OnStopLevelSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopCrateWidgetBase_OnStopLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopCrateWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopCrateWidgetBase_OnStopLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopCrateWidgetBase, nullptr, "OnStopLevelSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopCrateWidgetBase_OnStopLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopCrateWidgetBase_OnStopLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopCrateWidgetBase_OnStopLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopCrateWidgetBase_OnStopLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELShopCrateWidgetBase_NoRegister()
	{
		return UELShopCrateWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELShopCrateWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELShopCrateWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMainMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELShopCrateWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELShopCrateWidgetBase_ChangePlayLevelSequence, "ChangePlayLevelSequence" }, // 1981546564
		{ &Z_Construct_UFunction_UELShopCrateWidgetBase_IsPlayLevelSequence, "IsPlayLevelSequence" }, // 1605726221
		{ &Z_Construct_UFunction_UELShopCrateWidgetBase_OnCancelItem, "OnCancelItem" }, // 3888224694
		{ &Z_Construct_UFunction_UELShopCrateWidgetBase_OnChangeCategory, "OnChangeCategory" }, // 2001319692
		{ &Z_Construct_UFunction_UELShopCrateWidgetBase_OnDecideItem, "OnDecideItem" }, // 746107964
		{ &Z_Construct_UFunction_UELShopCrateWidgetBase_OnMoveUpDownCursor, "OnMoveUpDownCursor" }, // 3204428025
		{ &Z_Construct_UFunction_UELShopCrateWidgetBase_OnPlayLevelSequence, "OnPlayLevelSequence" }, // 1637763310
		{ &Z_Construct_UFunction_UELShopCrateWidgetBase_OnPressedMoveTab, "OnPressedMoveTab" }, // 2138661706
		{ &Z_Construct_UFunction_UELShopCrateWidgetBase_OnStopLevelSequence, "OnStopLevelSequence" }, // 2679109564
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShopCrateWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELShopCrateWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELShopCrateWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELShopCrateWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELShopCrateWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELShopCrateWidgetBase_Statics::ClassParams = {
		&UELShopCrateWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELShopCrateWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELShopCrateWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELShopCrateWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELShopCrateWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELShopCrateWidgetBase, 1820470378);
	template<> ELITE_API UClass* StaticClass<UELShopCrateWidgetBase>()
	{
		return UELShopCrateWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELShopCrateWidgetBase(Z_Construct_UClass_UELShopCrateWidgetBase, &UELShopCrateWidgetBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELShopCrateWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELShopCrateWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

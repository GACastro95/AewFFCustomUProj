// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELShopAEWGoldWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELShopAEWGoldWidgetBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELShopAEWGoldWidgetBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELShopAEWGoldWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMainMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	static FName NAME_UELShopAEWGoldWidgetBase_OnCancelItem = FName(TEXT("OnCancelItem"));
	void UELShopAEWGoldWidgetBase::OnCancelItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELShopAEWGoldWidgetBase_OnCancelItem),NULL);
	}
	static FName NAME_UELShopAEWGoldWidgetBase_OnChangeCategory = FName(TEXT("OnChangeCategory"));
	void UELShopAEWGoldWidgetBase::OnChangeCategory(int32 _addIndex)
	{
		ELShopAEWGoldWidgetBase_eventOnChangeCategory_Parms Parms;
		Parms._addIndex=_addIndex;
		ProcessEvent(FindFunctionChecked(NAME_UELShopAEWGoldWidgetBase_OnChangeCategory),&Parms);
	}
	static FName NAME_UELShopAEWGoldWidgetBase_OnDecideItem = FName(TEXT("OnDecideItem"));
	void UELShopAEWGoldWidgetBase::OnDecideItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELShopAEWGoldWidgetBase_OnDecideItem),NULL);
	}
	static FName NAME_UELShopAEWGoldWidgetBase_OnMoveUpDownCursor = FName(TEXT("OnMoveUpDownCursor"));
	void UELShopAEWGoldWidgetBase::OnMoveUpDownCursor()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELShopAEWGoldWidgetBase_OnMoveUpDownCursor),NULL);
	}
	static FName NAME_UELShopAEWGoldWidgetBase_OnPressedBackTitle = FName(TEXT("OnPressedBackTitle"));
	void UELShopAEWGoldWidgetBase::OnPressedBackTitle()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELShopAEWGoldWidgetBase_OnPressedBackTitle),NULL);
	}
	static FName NAME_UELShopAEWGoldWidgetBase_OnPressedMoveTab = FName(TEXT("OnPressedMoveTab"));
	void UELShopAEWGoldWidgetBase::OnPressedMoveTab(bool _isLeft)
	{
		ELShopAEWGoldWidgetBase_eventOnPressedMoveTab_Parms Parms;
		Parms._isLeft=_isLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELShopAEWGoldWidgetBase_OnPressedMoveTab),&Parms);
	}
	void UELShopAEWGoldWidgetBase::StaticRegisterNativesUELShopAEWGoldWidgetBase()
	{
	}
	struct Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnCancelItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnCancelItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopAEWGoldWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnCancelItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopAEWGoldWidgetBase, nullptr, "OnCancelItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnCancelItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnCancelItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnCancelItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnCancelItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnChangeCategory_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__addIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnChangeCategory_Statics::NewProp__addIndex = { "_addIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopAEWGoldWidgetBase_eventOnChangeCategory_Parms, _addIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnChangeCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnChangeCategory_Statics::NewProp__addIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnChangeCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopAEWGoldWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnChangeCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopAEWGoldWidgetBase, nullptr, "OnChangeCategory", nullptr, nullptr, sizeof(ELShopAEWGoldWidgetBase_eventOnChangeCategory_Parms), Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnChangeCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnChangeCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnChangeCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnChangeCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnChangeCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnChangeCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnDecideItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnDecideItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopAEWGoldWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnDecideItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopAEWGoldWidgetBase, nullptr, "OnDecideItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnDecideItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnDecideItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnDecideItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnDecideItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnMoveUpDownCursor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnMoveUpDownCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopAEWGoldWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnMoveUpDownCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopAEWGoldWidgetBase, nullptr, "OnMoveUpDownCursor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnMoveUpDownCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnMoveUpDownCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnMoveUpDownCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnMoveUpDownCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedBackTitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedBackTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopAEWGoldWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedBackTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopAEWGoldWidgetBase, nullptr, "OnPressedBackTitle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedBackTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedBackTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedBackTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedBackTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedMoveTab_Statics
	{
		static void NewProp__isLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit(void* Obj)
	{
		((ELShopAEWGoldWidgetBase_eventOnPressedMoveTab_Parms*)Obj)->_isLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft = { "_isLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELShopAEWGoldWidgetBase_eventOnPressedMoveTab_Parms), &Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedMoveTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedMoveTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopAEWGoldWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedMoveTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopAEWGoldWidgetBase, nullptr, "OnPressedMoveTab", nullptr, nullptr, sizeof(ELShopAEWGoldWidgetBase_eventOnPressedMoveTab_Parms), Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedMoveTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedMoveTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedMoveTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedMoveTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedMoveTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedMoveTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELShopAEWGoldWidgetBase_NoRegister()
	{
		return UELShopAEWGoldWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELShopAEWGoldWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELShopAEWGoldWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMainMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELShopAEWGoldWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnCancelItem, "OnCancelItem" }, // 2224136199
		{ &Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnChangeCategory, "OnChangeCategory" }, // 1056860286
		{ &Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnDecideItem, "OnDecideItem" }, // 433637310
		{ &Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnMoveUpDownCursor, "OnMoveUpDownCursor" }, // 2077276161
		{ &Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedBackTitle, "OnPressedBackTitle" }, // 1875108100
		{ &Z_Construct_UFunction_UELShopAEWGoldWidgetBase_OnPressedMoveTab, "OnPressedMoveTab" }, // 3581226077
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShopAEWGoldWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELShopAEWGoldWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELShopAEWGoldWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELShopAEWGoldWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELShopAEWGoldWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELShopAEWGoldWidgetBase_Statics::ClassParams = {
		&UELShopAEWGoldWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELShopAEWGoldWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELShopAEWGoldWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELShopAEWGoldWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELShopAEWGoldWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELShopAEWGoldWidgetBase, 1894497759);
	template<> ELITE_API UClass* StaticClass<UELShopAEWGoldWidgetBase>()
	{
		return UELShopAEWGoldWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELShopAEWGoldWidgetBase(Z_Construct_UClass_UELShopAEWGoldWidgetBase, &UELShopAEWGoldWidgetBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELShopAEWGoldWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELShopAEWGoldWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

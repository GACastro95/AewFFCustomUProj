// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELShopCrateDetailWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELShopCrateDetailWidgetBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELShopCrateDetailWidgetBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELShopCrateDetailWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMainMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	DEFINE_FUNCTION(UELShopCrateDetailWidgetBase::execSetMoveCursorValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMoveCursorValue(Z_Param__value);
		P_NATIVE_END;
	}
	static FName NAME_UELShopCrateDetailWidgetBase_OnCancelItem = FName(TEXT("OnCancelItem"));
	void UELShopCrateDetailWidgetBase::OnCancelItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELShopCrateDetailWidgetBase_OnCancelItem),NULL);
	}
	void UELShopCrateDetailWidgetBase::StaticRegisterNativesUELShopCrateDetailWidgetBase()
	{
		UClass* Class = UELShopCrateDetailWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMoveCursorValue", &UELShopCrateDetailWidgetBase::execSetMoveCursorValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELShopCrateDetailWidgetBase_OnCancelItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopCrateDetailWidgetBase_OnCancelItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopCrateDetailWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopCrateDetailWidgetBase_OnCancelItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopCrateDetailWidgetBase, nullptr, "OnCancelItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopCrateDetailWidgetBase_OnCancelItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopCrateDetailWidgetBase_OnCancelItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopCrateDetailWidgetBase_OnCancelItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopCrateDetailWidgetBase_OnCancelItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopCrateDetailWidgetBase_SetMoveCursorValue_Statics
	{
		struct ELShopCrateDetailWidgetBase_eventSetMoveCursorValue_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopCrateDetailWidgetBase_SetMoveCursorValue_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopCrateDetailWidgetBase_eventSetMoveCursorValue_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopCrateDetailWidgetBase_SetMoveCursorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopCrateDetailWidgetBase_SetMoveCursorValue_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopCrateDetailWidgetBase_SetMoveCursorValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopCrateDetailWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopCrateDetailWidgetBase_SetMoveCursorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopCrateDetailWidgetBase, nullptr, "SetMoveCursorValue", nullptr, nullptr, sizeof(ELShopCrateDetailWidgetBase_eventSetMoveCursorValue_Parms), Z_Construct_UFunction_UELShopCrateDetailWidgetBase_SetMoveCursorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopCrateDetailWidgetBase_SetMoveCursorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopCrateDetailWidgetBase_SetMoveCursorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopCrateDetailWidgetBase_SetMoveCursorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopCrateDetailWidgetBase_SetMoveCursorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopCrateDetailWidgetBase_SetMoveCursorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELShopCrateDetailWidgetBase_NoRegister()
	{
		return UELShopCrateDetailWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELShopCrateDetailWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELShopCrateDetailWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMainMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELShopCrateDetailWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELShopCrateDetailWidgetBase_OnCancelItem, "OnCancelItem" }, // 1503478281
		{ &Z_Construct_UFunction_UELShopCrateDetailWidgetBase_SetMoveCursorValue, "SetMoveCursorValue" }, // 3015069505
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShopCrateDetailWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELShopCrateDetailWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELShopCrateDetailWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELShopCrateDetailWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELShopCrateDetailWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELShopCrateDetailWidgetBase_Statics::ClassParams = {
		&UELShopCrateDetailWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELShopCrateDetailWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELShopCrateDetailWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELShopCrateDetailWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELShopCrateDetailWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELShopCrateDetailWidgetBase, 1576711146);
	template<> ELITE_API UClass* StaticClass<UELShopCrateDetailWidgetBase>()
	{
		return UELShopCrateDetailWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELShopCrateDetailWidgetBase(Z_Construct_UClass_UELShopCrateDetailWidgetBase, &UELShopCrateDetailWidgetBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELShopCrateDetailWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELShopCrateDetailWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

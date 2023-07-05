// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELStatsMostUsedWrestlerWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELStatsMostUsedWrestlerWidgetBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELStatsMostUsedWrestlerWidgetBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELStatsMostUsedWrestlerWidgetBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FStatsUsedWrestler();
// End Cross Module References
	DEFINE_FUNCTION(UELStatsMostUsedWrestlerWidgetBase::execUsedCount_Sort)
	{
		P_GET_TARRAY(FStatsUsedWrestler,Z_Param__target);
		P_GET_UBOOL(Z_Param_IsDesc);
		P_GET_TARRAY_REF(FStatsUsedWrestler,Z_Param_Out__out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UsedCount_Sort(Z_Param__target,Z_Param_IsDesc,Z_Param_Out__out);
		P_NATIVE_END;
	}
	void UELStatsMostUsedWrestlerWidgetBase::StaticRegisterNativesUELStatsMostUsedWrestlerWidgetBase()
	{
		UClass* Class = UELStatsMostUsedWrestlerWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UsedCount_Sort", &UELStatsMostUsedWrestlerWidgetBase::execUsedCount_Sort },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics
	{
		struct ELStatsMostUsedWrestlerWidgetBase_eventUsedCount_Sort_Parms
		{
			TArray<FStatsUsedWrestler> _target;
			bool IsDesc;
			TArray<FStatsUsedWrestler> _out;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__target_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__target;
		static void NewProp_IsDesc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDesc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__out_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::NewProp__target_Inner = { "_target", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStatsUsedWrestler, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::NewProp__target = { "_target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsMostUsedWrestlerWidgetBase_eventUsedCount_Sort_Parms, _target), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::NewProp_IsDesc_SetBit(void* Obj)
	{
		((ELStatsMostUsedWrestlerWidgetBase_eventUsedCount_Sort_Parms*)Obj)->IsDesc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::NewProp_IsDesc = { "IsDesc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsMostUsedWrestlerWidgetBase_eventUsedCount_Sort_Parms), &Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::NewProp_IsDesc_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::NewProp__out_Inner = { "_out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStatsUsedWrestler, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::NewProp__out = { "_out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsMostUsedWrestlerWidgetBase_eventUsedCount_Sort_Parms, _out), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::NewProp__target_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::NewProp__target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::NewProp_IsDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::NewProp__out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::NewProp__out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsMostUsedWrestlerWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsMostUsedWrestlerWidgetBase, nullptr, "UsedCount_Sort", nullptr, nullptr, sizeof(ELStatsMostUsedWrestlerWidgetBase_eventUsedCount_Sort_Parms), Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELStatsMostUsedWrestlerWidgetBase_NoRegister()
	{
		return UELStatsMostUsedWrestlerWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELStatsMostUsedWrestlerWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELStatsMostUsedWrestlerWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELStatsMostUsedWrestlerWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELStatsMostUsedWrestlerWidgetBase_UsedCount_Sort, "UsedCount_Sort" }, // 1852787595
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELStatsMostUsedWrestlerWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELStatsMostUsedWrestlerWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELStatsMostUsedWrestlerWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELStatsMostUsedWrestlerWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELStatsMostUsedWrestlerWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELStatsMostUsedWrestlerWidgetBase_Statics::ClassParams = {
		&UELStatsMostUsedWrestlerWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELStatsMostUsedWrestlerWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELStatsMostUsedWrestlerWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELStatsMostUsedWrestlerWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELStatsMostUsedWrestlerWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELStatsMostUsedWrestlerWidgetBase, 1824474481);
	template<> ELITE_API UClass* StaticClass<UELStatsMostUsedWrestlerWidgetBase>()
	{
		return UELStatsMostUsedWrestlerWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELStatsMostUsedWrestlerWidgetBase(Z_Construct_UClass_UELStatsMostUsedWrestlerWidgetBase, &UELStatsMostUsedWrestlerWidgetBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELStatsMostUsedWrestlerWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELStatsMostUsedWrestlerWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

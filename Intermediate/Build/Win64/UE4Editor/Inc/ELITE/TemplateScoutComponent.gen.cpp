// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/TemplateScoutComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateScoutComponent() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UTemplateScoutComponent_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UTemplateScoutComponent();
	CREATION_API UClass* Z_Construct_UClass_UMyWrestlerDataEditComponent();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateScoutParam();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	ABP_200508_API UClass* Z_Construct_UClass_UTemplateScoutListAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTemplateScoutComponent::execGetScoutTemplateList)
	{
		P_GET_TARRAY_REF(FTemplateScoutParam,Z_Param_Out_List);
		P_GET_ENUM(EGender,Z_Param_Gender);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetScoutTemplateList(Z_Param_Out_List,EGender(Z_Param_Gender));
		P_NATIVE_END;
	}
	void UTemplateScoutComponent::StaticRegisterNativesUTemplateScoutComponent()
	{
		UClass* Class = UTemplateScoutComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScoutTemplateList", &UTemplateScoutComponent::execGetScoutTemplateList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics
	{
		struct TemplateScoutComponent_eventGetScoutTemplateList_Parms
		{
			TArray<FTemplateScoutParam> List;
			EGender Gender;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_List_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_List;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::NewProp_List_Inner = { "List", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTemplateScoutParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateScoutComponent_eventGetScoutTemplateList_Parms, List), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::NewProp_Gender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateScoutComponent_eventGetScoutTemplateList_Parms, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::NewProp_List_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::NewProp_List,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::NewProp_Gender,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TemplateScoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTemplateScoutComponent, nullptr, "GetScoutTemplateList", nullptr, nullptr, sizeof(TemplateScoutComponent_eventGetScoutTemplateList_Parms), Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTemplateScoutComponent_NoRegister()
	{
		return UTemplateScoutComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateScoutComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateListAsset_Male_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TemplateListAsset_Male;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateListAsset_Female_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TemplateListAsset_Female;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateScoutComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMyWrestlerDataEditComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTemplateScoutComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTemplateScoutComponent_GetScoutTemplateList, "GetScoutTemplateList" }, // 2705846417
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateScoutComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TemplateScoutComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TemplateScoutComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateScoutComponent_Statics::NewProp_TemplateListAsset_Male_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TemplateScoutComponent" },
		{ "ModuleRelativePath", "Public/TemplateScoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTemplateScoutComponent_Statics::NewProp_TemplateListAsset_Male = { "TemplateListAsset_Male", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateScoutComponent, TemplateListAsset_Male), Z_Construct_UClass_UTemplateScoutListAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTemplateScoutComponent_Statics::NewProp_TemplateListAsset_Male_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateScoutComponent_Statics::NewProp_TemplateListAsset_Male_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateScoutComponent_Statics::NewProp_TemplateListAsset_Female_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TemplateScoutComponent" },
		{ "ModuleRelativePath", "Public/TemplateScoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTemplateScoutComponent_Statics::NewProp_TemplateListAsset_Female = { "TemplateListAsset_Female", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateScoutComponent, TemplateListAsset_Female), Z_Construct_UClass_UTemplateScoutListAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTemplateScoutComponent_Statics::NewProp_TemplateListAsset_Female_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateScoutComponent_Statics::NewProp_TemplateListAsset_Female_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTemplateScoutComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateScoutComponent_Statics::NewProp_TemplateListAsset_Male,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateScoutComponent_Statics::NewProp_TemplateListAsset_Female,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateScoutComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateScoutComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTemplateScoutComponent_Statics::ClassParams = {
		&UTemplateScoutComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTemplateScoutComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateScoutComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplateScoutComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateScoutComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateScoutComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTemplateScoutComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTemplateScoutComponent, 4165443355);
	template<> ELITE_API UClass* StaticClass<UTemplateScoutComponent>()
	{
		return UTemplateScoutComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTemplateScoutComponent(Z_Construct_UClass_UTemplateScoutComponent, &UTemplateScoutComponent::StaticClass, TEXT("/Script/ELITE"), TEXT("UTemplateScoutComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateScoutComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

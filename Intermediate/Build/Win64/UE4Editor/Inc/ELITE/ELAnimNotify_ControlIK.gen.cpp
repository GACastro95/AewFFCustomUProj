// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELAnimNotify_ControlIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimNotify_ControlIK() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELAnimNotify_ControlIK_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELAnimNotify_ControlIK();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FControlIK();
// End Cross Module References
	DEFINE_FUNCTION(UELAnimNotify_ControlIK::execNotify)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Notify(Z_Param_MeshComp,Z_Param_Animation);
		P_NATIVE_END;
	}
	void UELAnimNotify_ControlIK::StaticRegisterNativesUELAnimNotify_ControlIK()
	{
		UClass* Class = UELAnimNotify_ControlIK::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Notify", &UELAnimNotify_ControlIK::execNotify },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify_Statics
	{
		struct ELAnimNotify_ControlIK_eventNotify_Parms
		{
			USkeletalMeshComponent* MeshComp;
			UAnimSequenceBase* Animation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimNotify_ControlIK_eventNotify_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimNotify_ControlIK_eventNotify_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify_Statics::NewProp_Animation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimNotify_ControlIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimNotify_ControlIK, nullptr, "Notify", nullptr, nullptr, sizeof(ELAnimNotify_ControlIK_eventNotify_Parms), Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELAnimNotify_ControlIK_NoRegister()
	{
		return UELAnimNotify_ControlIK::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimNotify_ControlIK_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELAnimNotify_ControlIK_Notify, "Notify" }, // 831736134
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELAnimNotify_ControlIK.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimNotify_ControlIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FControlIK, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::NewProp_Items_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimNotify_ControlIK" },
		{ "ModuleRelativePath", "Public/ELAnimNotify_ControlIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimNotify_ControlIK, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::NewProp_Items,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimNotify_ControlIK>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::ClassParams = {
		&UELAnimNotify_ControlIK::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimNotify_ControlIK()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimNotify_ControlIK_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimNotify_ControlIK, 175886750);
	template<> ELITE_API UClass* StaticClass<UELAnimNotify_ControlIK>()
	{
		return UELAnimNotify_ControlIK::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimNotify_ControlIK(Z_Construct_UClass_UELAnimNotify_ControlIK, &UELAnimNotify_ControlIK::StaticClass, TEXT("/Script/ELITE"), TEXT("UELAnimNotify_ControlIK"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimNotify_ControlIK);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

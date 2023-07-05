// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSAnimNotify_Down.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSAnimNotify_Down() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotify_Down_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotify_Down();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyBaseBranchingPoint();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSActionDownFaceUpType();
// End Cross Module References
	DEFINE_FUNCTION(UELSSAnimNotify_Down::execNotify)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Notify(Z_Param_MeshComp,Z_Param_Animation);
		P_NATIVE_END;
	}
	void UELSSAnimNotify_Down::StaticRegisterNativesUELSSAnimNotify_Down()
	{
		UClass* Class = UELSSAnimNotify_Down::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Notify", &UELSSAnimNotify_Down::execNotify },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSAnimNotify_Down_Notify_Statics
	{
		struct ELSSAnimNotify_Down_eventNotify_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimNotify_Down_Notify_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAnimNotify_Down_Notify_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimNotify_Down_eventNotify_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimNotify_Down_Notify_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotify_Down_Notify_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAnimNotify_Down_Notify_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimNotify_Down_eventNotify_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAnimNotify_Down_Notify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimNotify_Down_Notify_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimNotify_Down_Notify_Statics::NewProp_Animation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimNotify_Down_Notify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Down.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAnimNotify_Down_Notify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAnimNotify_Down, nullptr, "Notify", nullptr, nullptr, sizeof(ELSSAnimNotify_Down_eventNotify_Parms), Z_Construct_UFunction_UELSSAnimNotify_Down_Notify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotify_Down_Notify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimNotify_Down_Notify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotify_Down_Notify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAnimNotify_Down_Notify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAnimNotify_Down_Notify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSAnimNotify_Down_NoRegister()
	{
		return UELSSAnimNotify_Down::StaticClass();
	}
	struct Z_Construct_UClass_UELSSAnimNotify_Down_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_faceUpType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_faceUpType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_faceUpType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSAnimNotify_Down_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSAnimNotifyBaseBranchingPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSAnimNotify_Down_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSAnimNotify_Down_Notify, "Notify" }, // 49544953
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_Down_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELSSAnimNotify_Down.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Down.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSAnimNotify_Down_Statics::NewProp_faceUpType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_Down_Statics::NewProp_faceUpType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotify_Down" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Down.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSAnimNotify_Down_Statics::NewProp_faceUpType = { "faceUpType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotify_Down, faceUpType), Z_Construct_UEnum_ABP_200508_ESSActionDownFaceUpType, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_Down_Statics::NewProp_faceUpType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Down_Statics::NewProp_faceUpType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSAnimNotify_Down_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_Down_Statics::NewProp_faceUpType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_Down_Statics::NewProp_faceUpType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSAnimNotify_Down_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSAnimNotify_Down>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSAnimNotify_Down_Statics::ClassParams = {
		&UELSSAnimNotify_Down::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSAnimNotify_Down_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Down_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_Down_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Down_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSAnimNotify_Down()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSAnimNotify_Down_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSAnimNotify_Down, 2070350564);
	template<> ABP_200508_API UClass* StaticClass<UELSSAnimNotify_Down>()
	{
		return UELSSAnimNotify_Down::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSAnimNotify_Down(Z_Construct_UClass_UELSSAnimNotify_Down, &UELSSAnimNotify_Down::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSAnimNotify_Down"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSAnimNotify_Down);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

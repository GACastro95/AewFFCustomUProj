// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSAnimNotify_ProgressActionCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSAnimNotify_ProgressActionCamera() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSActionCameraID();
// End Cross Module References
	DEFINE_FUNCTION(UELSSAnimNotify_ProgressActionCamera::execNotify)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_inMeshComp);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_InAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Notify(Z_Param_inMeshComp,Z_Param_InAnimation);
		P_NATIVE_END;
	}
	void UELSSAnimNotify_ProgressActionCamera::StaticRegisterNativesUELSSAnimNotify_ProgressActionCamera()
	{
		UClass* Class = UELSSAnimNotify_ProgressActionCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Notify", &UELSSAnimNotify_ProgressActionCamera::execNotify },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify_Statics
	{
		struct ELSSAnimNotify_ProgressActionCamera_eventNotify_Parms
		{
			USkeletalMeshComponent* inMeshComp;
			UAnimSequenceBase* InAnimation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMeshComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify_Statics::NewProp_inMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify_Statics::NewProp_inMeshComp = { "inMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimNotify_ProgressActionCamera_eventNotify_Parms, inMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify_Statics::NewProp_inMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify_Statics::NewProp_inMeshComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimNotify_ProgressActionCamera_eventNotify_Parms, InAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify_Statics::NewProp_inMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify_Statics::NewProp_InAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_ProgressActionCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera, nullptr, "Notify", nullptr, nullptr, sizeof(ELSSAnimNotify_ProgressActionCamera_eventNotify_Parms), Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_NoRegister()
	{
		return UELSSAnimNotify_ProgressActionCamera::StaticClass();
	}
	struct Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionCameraID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionCameraID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionCameraID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewStep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSAnimNotifyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSAnimNotify_ProgressActionCamera_Notify, "Notify" }, // 1554390414
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELSSAnimNotify_ProgressActionCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_ProgressActionCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::NewProp_ActionCameraID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::NewProp_ActionCameraID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotify_ProgressActionCamera" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_ProgressActionCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::NewProp_ActionCameraID = { "ActionCameraID", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotify_ProgressActionCamera, ActionCameraID), Z_Construct_UEnum_ABP_200508_ESSActionCameraID, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::NewProp_ActionCameraID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::NewProp_ActionCameraID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::NewProp_NewStep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotify_ProgressActionCamera" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_ProgressActionCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::NewProp_NewStep = { "NewStep", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotify_ProgressActionCamera, NewStep), METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::NewProp_NewStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::NewProp_NewStep_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::NewProp_ActionCameraID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::NewProp_ActionCameraID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::NewProp_NewStep,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSAnimNotify_ProgressActionCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::ClassParams = {
		&UELSSAnimNotify_ProgressActionCamera::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSAnimNotify_ProgressActionCamera, 2080659181);
	template<> ABP_200508_API UClass* StaticClass<UELSSAnimNotify_ProgressActionCamera>()
	{
		return UELSSAnimNotify_ProgressActionCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSAnimNotify_ProgressActionCamera(Z_Construct_UClass_UELSSAnimNotify_ProgressActionCamera, &UELSSAnimNotify_ProgressActionCamera::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSAnimNotify_ProgressActionCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSAnimNotify_ProgressActionCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

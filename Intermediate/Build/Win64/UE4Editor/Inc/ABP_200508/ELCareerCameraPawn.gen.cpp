// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerCameraPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerCameraPawn() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerCameraPawn_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerCameraPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMapCameraType();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerCameraPawn::execSetupCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerCameraPawn::execSetupCameraActorWithCameraComponent)
	{
		P_GET_ENUM(ECareerMapCameraType,Z_Param_eCameraType);
		P_GET_OBJECT(UCameraComponent,Z_Param_pCameraComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupCameraActorWithCameraComponent(ECareerMapCameraType(Z_Param_eCameraType),Z_Param_pCameraComponent);
		P_NATIVE_END;
	}
	static FName NAME_AELCareerCameraPawn_SetupCameraActorBP = FName(TEXT("SetupCameraActorBP"));
	void AELCareerCameraPawn::SetupCameraActorBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELCareerCameraPawn_SetupCameraActorBP),NULL);
	}
	void AELCareerCameraPawn::StaticRegisterNativesAELCareerCameraPawn()
	{
		UClass* Class = AELCareerCameraPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupCamera", &AELCareerCameraPawn::execSetupCamera },
			{ "SetupCameraActorWithCameraComponent", &AELCareerCameraPawn::execSetupCameraActorWithCameraComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerCameraPawn_SetupCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerCameraPawn_SetupCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerCameraPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerCameraPawn_SetupCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerCameraPawn, nullptr, "SetupCamera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerCameraPawn_SetupCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerCameraPawn_SetupCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerCameraPawn_SetupCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerCameraPawn_SetupCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerCameraPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerCameraPawn, nullptr, "SetupCameraActorBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics
	{
		struct ELCareerCameraPawn_eventSetupCameraActorWithCameraComponent_Parms
		{
			ECareerMapCameraType eCameraType;
			UCameraComponent* pCameraComponent;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eCameraType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eCameraType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::NewProp_eCameraType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::NewProp_eCameraType = { "eCameraType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerCameraPawn_eventSetupCameraActorWithCameraComponent_Parms, eCameraType), Z_Construct_UEnum_ABP_200508_ECareerMapCameraType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::NewProp_pCameraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::NewProp_pCameraComponent = { "pCameraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerCameraPawn_eventSetupCameraActorWithCameraComponent_Parms, pCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::NewProp_pCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::NewProp_pCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::NewProp_eCameraType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::NewProp_eCameraType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::NewProp_pCameraComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerCameraPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerCameraPawn, nullptr, "SetupCameraActorWithCameraComponent", nullptr, nullptr, sizeof(ELCareerCameraPawn_eventSetupCameraActorWithCameraComponent_Parms), Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerCameraPawn_NoRegister()
	{
		return AELCareerCameraPawn::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerCameraPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_CameraActorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CameraActorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_CameraActorArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerCameraPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerCameraPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerCameraPawn_SetupCamera, "SetupCamera" }, // 3221604952
		{ &Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorBP, "SetupCameraActorBP" }, // 718626414
		{ &Z_Construct_UFunction_AELCareerCameraPawn_SetupCameraActorWithCameraComponent, "SetupCameraActorWithCameraComponent" }, // 3278705377
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerCameraPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ELCareerCameraPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerCameraPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerCameraPawn_Statics::NewProp_m_CameraActorArray_Inner = { "m_CameraActorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerCameraPawn_Statics::NewProp_m_CameraActorArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerCameraPawn" },
		{ "ModuleRelativePath", "Public/ELCareerCameraPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerCameraPawn_Statics::NewProp_m_CameraActorArray = { "m_CameraActorArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerCameraPawn, m_CameraActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerCameraPawn_Statics::NewProp_m_CameraActorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerCameraPawn_Statics::NewProp_m_CameraActorArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCareerCameraPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerCameraPawn_Statics::NewProp_m_CameraActorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerCameraPawn_Statics::NewProp_m_CameraActorArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerCameraPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerCameraPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerCameraPawn_Statics::ClassParams = {
		&AELCareerCameraPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCareerCameraPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerCameraPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerCameraPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerCameraPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerCameraPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerCameraPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerCameraPawn, 1952466560);
	template<> ABP_200508_API UClass* StaticClass<AELCareerCameraPawn>()
	{
		return AELCareerCameraPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerCameraPawn(Z_Construct_UClass_AELCareerCameraPawn, &AELCareerCameraPawn::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerCameraPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerCameraPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

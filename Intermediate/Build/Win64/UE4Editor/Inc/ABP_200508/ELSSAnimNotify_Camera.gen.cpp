// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSAnimNotify_Camera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSAnimNotify_Camera() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotify_Camera_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotify_Camera();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSStationalCameraEaseType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSStationalCameraBaseTransformMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UELSSAnimNotify_Camera::execNotify)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Notify(Z_Param_MeshComp,Z_Param_Animation);
		P_NATIVE_END;
	}
	void UELSSAnimNotify_Camera::StaticRegisterNativesUELSSAnimNotify_Camera()
	{
		UClass* Class = UELSSAnimNotify_Camera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Notify", &UELSSAnimNotify_Camera::execNotify },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify_Statics
	{
		struct ELSSAnimNotify_Camera_eventNotify_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimNotify_Camera_eventNotify_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimNotify_Camera_eventNotify_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify_Statics::NewProp_Animation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAnimNotify_Camera, nullptr, "Notify", nullptr, nullptr, sizeof(ELSSAnimNotify_Camera_eventNotify_Parms), Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSAnimNotify_Camera_NoRegister()
	{
		return UELSSAnimNotify_Camera::StaticClass();
	}
	struct Z_Construct_UClass_UELSSAnimNotify_Camera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLocatorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraLocatorId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpDuration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpEaseType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpEaseType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InterpEaseType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BaseTransformMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTransformMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BaseTransformMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTransformSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BaseTransformSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTransformOffsetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseTransformOffsetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTransformOffsetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseTransformOffsetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSAnimNotifyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSAnimNotify_Camera_Notify, "Notify" }, // 3500628355
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELSSAnimNotify_Camera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Camera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_CameraLocatorId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotify_Camera" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_CameraLocatorId = { "CameraLocatorId", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotify_Camera, CameraLocatorId), METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_CameraLocatorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_CameraLocatorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_InterpDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotify_Camera" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_InterpDuration = { "InterpDuration", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotify_Camera, InterpDuration), METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_InterpDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_InterpDuration_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_InterpEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_InterpEaseType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotify_Camera" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_InterpEaseType = { "InterpEaseType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotify_Camera, InterpEaseType), Z_Construct_UEnum_ABP_200508_ESSStationalCameraEaseType, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_InterpEaseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_InterpEaseType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotify_Camera" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformMode = { "BaseTransformMode", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotify_Camera, BaseTransformMode), Z_Construct_UEnum_ABP_200508_ESSStationalCameraBaseTransformMode, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotify_Camera" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformSocket = { "BaseTransformSocket", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotify_Camera, BaseTransformSocket), METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformOffsetRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotify_Camera" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformOffsetRotation = { "BaseTransformOffsetRotation", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotify_Camera, BaseTransformOffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformOffsetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformOffsetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformOffsetLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotify_Camera" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotify_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformOffsetLocation = { "BaseTransformOffsetLocation", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimNotify_Camera, BaseTransformOffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformOffsetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformOffsetLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_CameraLocatorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_InterpDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_InterpEaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_InterpEaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformOffsetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::NewProp_BaseTransformOffsetLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSAnimNotify_Camera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::ClassParams = {
		&UELSSAnimNotify_Camera::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSAnimNotify_Camera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSAnimNotify_Camera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSAnimNotify_Camera, 2177530275);
	template<> ABP_200508_API UClass* StaticClass<UELSSAnimNotify_Camera>()
	{
		return UELSSAnimNotify_Camera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSAnimNotify_Camera(Z_Construct_UClass_UELSSAnimNotify_Camera, &UELSSAnimNotify_Camera::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSAnimNotify_Camera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSAnimNotify_Camera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
